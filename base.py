# Importações necessárias
from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import classification_report, accuracy_score
import pandas as pd

# 1. Carregar a base de dados
wine = load_wine()
X = wine.data  # Características (features)
y = wine.target  # Rótulos (labels)

# Converter para DataFrame para visualização (opcional)
df = pd.DataFrame(data=X, columns=wine.feature_names)
df['target'] = y
print("\nAmostra dos dados:")
print(df.head())

# 2. Dividir em conjuntos de treino e teste
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# 3. Criar e treinar o modelo Random Forest
model = RandomForestClassifier(n_estimators=100, random_state=42)  # 100 árvores
model.fit(X_train, y_train)

# 4. Fazer previsões
y_pred = model.predict(X_test)

# 5. Avaliar o modelo
print("\nRelatório de Classificação:")
print(classification_report(y_test, y_pred))
print(f"\nAcurácia: {accuracy_score(y_test, y_pred):.2f}")

# 6. Exemplo de previsão para uma nova amostra (opcional)
nova_amostra = [X_test[0]]  # Pegando a primeira amostra do teste como exemplo
previsao = model.predict(nova_amostra)
print(f"\nPrevisão para nova amostra: Classe {previsao[0]} ({wine.target_names[previsao[0]]})")