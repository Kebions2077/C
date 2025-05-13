# --------------------------------------------------
# Random Tree com dados do UCI - Glass Identification
# --------------------------------------------------

## 1. Preparação e Download ----
rm(list = ls())

# Carregar pacotes
if (!require(pacman)) install.packages("pacman")
pacman::p_load(dplyr, rpart, rpart.plot, caret)

# URL dos dados
url <- "https://archive.ics.uci.edu/ml/machine-learning-databases/glass/glass.data"

# Ler os dados (sem cabeçalho)
glass <- read.csv(url, header = FALSE)

# Adicionar nomes das colunas conforme documentação do UCI
colnames(glass) <- c(
  "Id", "RI", "Na", "Mg", "Al", "Si", "K", "Ca", "Ba", "Fe", "Type"
)

# Remover a coluna de ID (não é útil para modelagem)
glass <- glass %>% select(-Id)

# Converter target em fator
glass$Type <- as.factor(glass$Type)

## 2. Divisão dos Dados ----
set.seed(123)
index <- createDataPartition(glass$Type, p = 0.8, list = FALSE)
trainset <- glass[index, ]
testset  <- glass[-index, ]

## 3. Treinamento de Árvore de Decisão (Random Tree Simples) ----
model_tree <- rpart(Type ~ ., data = trainset, method = "class")

# Visualização da árvore
rpart.plot(model_tree, main = "Árvore de Decisão para Classificação de Vidros")

## 4. Avaliação ----
pred <- predict(model_tree, newdata = testset, type = "class")
cm <- confusionMatrix(pred, testset$Type)

## 5. Resultados ----
cat("\n=== Acurácia ===\n")
print(round(cm$overall["Accuracy"], 4))
cat("\n=== Matriz de Confusão ===\n")
print(cm$table)
