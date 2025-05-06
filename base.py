import matplotlib.pyplot as plt
from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import classification_report, accuracy_score, confusion_matrix, ConfusionMatrixDisplay

wine = load_wine()
X, y = wine.data, wine.target

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)

y_pred = model.predict(X_test)

print("Relatório de Classificação:\n")
print(classification_report(y_test, y_pred))
print(f"Acurácia: {accuracy_score(y_test, y_pred):.2f}")

plt.figure(figsize=(8, 6))
cm = confusion_matrix(y_test, y_pred)
disp = ConfusionMatrixDisplay(confusion_matrix=cm, display_labels=wine.target_names)
disp.plot(cmap='Blues')
plt.title("Matriz de Confusão")
plt.savefig('matriz_confusao.png', dpi=300, bbox_inches='tight')
plt.show()

plt.figure(figsize=(10, 6))
importances = model.feature_importances_
indices = importances.argsort()[::-1]
plt.title("Importância das Características")
plt.barh(range(X.shape[1]), importances[indices], align='center')
plt.yticks(range(X.shape[1]), [wine.feature_names[i] for i in indices])
plt.xlabel("Importância Relativa")
plt.tight_layout()
plt.savefig('importancia_features.png', dpi=300, bbox_inches='tight')
plt.show()

report = classification_report(y_test, y_pred, output_dict=True)
metrics = ['precision', 'recall', 'f1-score']
classes = wine.target_names

plt.figure(figsize=(10, 6))
for metric in metrics:
    values = [report[class_][metric] for class_ in classes]
    plt.plot(classes, values, marker='o', label=metric)

plt.title("Métricas por Classe")
plt.xlabel("Classe")
plt.ylabel("Valor")
plt.ylim(0, 1.1)
plt.legend()
plt.grid(True)
plt.savefig('metricas_classes.png', dpi=300, bbox_inches='tight')
plt.show()