rm(list = ls())

library(caret)
library(rpart)
library(rpart.plot)
library(ggplot2)

glass <- read.csv("C:/dev/glass.csv")

#convert target variable to factor
glass$Type <- as.factor(glass$Type)


###EXPLORING THE DATA
dim(glass)
str(glass)
summary(glass)
levels(glass$Type)


###Exploratory Data Analysis (EDA)

# Histograms for each numeric feature
par(mfrow = c(3, 3))
for (i in 1:(ncol(glass) - 1)) {
  hist(glass[, i],
       main = paste("Histogram of", names(glass)[i]),
       xlab = names(glass)[i],
       col = "skyblue")
}
par(mfrow = c(1, 1))

# Boxplots by Type for some variables
boxplot(glass$RI ~ glass$Type, xlab = "Glass Type", ylab = "RI")
boxplot(glass$Na ~ glass$Type, xlab = "Glass Type", ylab = "Sodium (Na)")
boxplot(glass$Mg ~ glass$Type, xlab = "Glass Type", ylab = "Magnesium (Mg)")


#train/test
set.seed(1)
index <- createDataPartition(glass$Type, p = 0.8, list = FALSE)
trainset <- glass[index, ]
testset <- glass[-index, ]

#data dimensions
cat("Train set:", dim(trainset), "\n")
cat("Test set:", dim(testset), "\n")

#model training
fitControl <- trainControl(method = "cv", number = 10)

model <- train(Type ~ ., data = trainset,
               method = "rpart",
               trControl = fitControl,
               tuneLength = 10)

print(model)

#show tree
tree_model <- model$finalModel
rpart.plot(tree_model, type = 2, extra = 104, fallen.leaves = TRUE)

pred_train <- predict(model, trainset)
pred_test <- predict(model, testset)

#confusion matrices
cat("Confusion Matrix - Train:\n")
print(confusionMatrix(pred_train, trainset$Type))

cat("Confusion Matrix - Test:\n")
print(confusionMatrix(pred_test, testset$Type))