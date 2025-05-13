# --------------------------------------------------
# Random Tree com dados do UCI - Glass (sem classe 6)
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

# Nomear colunas conforme documentação
colnames(glass) <- c(
  "Id", "RI", "Na", "Mg", "Al", "Si", "K", "Ca", "Ba", "Fe", "Type"
)

# Remover coluna ID
glass <- glass %>% select(-Id)

# Excluir registros da classe 6
glass <- glass %>% filter(Type != 6)

# Converter Type para fator (sem classe 6)
glass$Type <- factor(glass$Type)

# Verificar níveis após remoção
cat("Níveis da variável Type após exclusão da classe 6:\n")
print(levels(glass$Type))

## 2. Divisão dos Dados ----
set.seed(123)
index <- createDataPartition(glass$Type, p = 0.8, list = FALSE)
trainset <- glass[index, ]
testset  <- glass[-index, ]

## 3. Treinamento da Árvore de Decisão ----
model_tree <- rpart(Type ~ ., data = trainset, method = "class")

# Visualização da árvore
rpart.plot(model_tree, main = "Árvore de Decisão - Glass (Sem Classe 6)")

## 4. Avaliação ----
pred <- predict(model_tree, newdata = testset, type = "class")
cm <- confusionMatrix(pred, testset$Type)

## 5. Resultados ----
cat("\n=== Acurácia ===\n")
print(round(cm$overall["Accuracy"], 4))
cat("\n=== Matriz de Confusão ===\n")
print(cm$table)
