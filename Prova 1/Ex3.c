#include <stdio.h>

void preenche(int vet[10]);
int cal_maior(int vet[10]);
int cal_soma(int vet[10]);
float cal_media(int soma);

void preenche(int vet[10]) {
    for(int x = 0; x < 10; x++) {
        printf("Digite a posição [%d]: ", x);
        scanf("%d", &vet[x]);
    }
}

int cal_soma(int vet[10]) {
    int soma = 0;
    for(int x = 0; x < 10; x++) {
        soma += vet[x];
    }
    return soma;
}

float cal_media(int soma) {
    return (float)soma / 10;  // Conversão para float para divisão exata
}

int cal_maior(int vet[10]) {
    int maior = vet[0];
    for(int x = 1; x < 10; x++) {
        if(vet[x] > maior) {
            maior = vet[x];
        }
    }
    return maior;
}

int main() {
    int vet[10], maior, soma;
    float media;
    
    preenche(vet);
    
    printf("Vetor de 10 posições:\n");
    for(int x = 0; x < 10; x++) {
        printf("[%d] ", vet[x]);
    }
    printf("\n");
    
    soma = cal_soma(vet);
    printf("Soma dos valores: %d\n", soma);
    
    media = cal_media(soma);
    printf("Média dos elementos: %.2f\n", media);
    
    maior = cal_maior(vet);
    printf("Maior valor no vetor: %d\n", maior);
    
    return 0;
}