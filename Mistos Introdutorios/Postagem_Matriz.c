#include <stdio.h>
#include <math.h>

void potencia(int base, int expoente);
void ler_inteiro(int num[5]);
void soma_divisores(int num[5]);
void cal_medias(int notas[3]);

int main(void) {
    int op, base, expoente, num[5], notas[3];

    printf("---Funções Postagem---\n");
    printf("1) Potência\n");
    printf("2) Leitura de Inteiros e Soma de Divisores\n");
    printf("3) Médias Aritméticas e Harmônicas\n");
    printf("------------------------------------\n");
    scanf("%i", &op);

    switch (op) {
        case 1:
            printf("---Potência---\n");
            printf("Digite a base: ");
            scanf("%i", &base);
            printf("Digite o expoente: ");
            scanf("%i", &expoente);
            potencia(base, expoente);
            break;

        case 2:
            printf("---Leitura de Inteiros e Soma de Divisores---\n");
            ler_inteiro(num);
            soma_divisores(num);
            break;

        case 3:
            printf("---Calculo De Medias---\n");
            printf("Digite suas tres notas:\n");
            scanf("%i %i %i", &notas[0], &notas[1], &notas[2]);
            cal_medias(notas);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}

void potencia(int base, int expoente) {
    int resultado = pow(base, expoente);
    printf("Resultado da potenciação: %i\n", resultado);
}

void ler_inteiro(int num[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Digite um inteiro positivo (%d/5): ", i + 1);
        scanf("%i", &num[i]);

        while (num[i] <= 0) {
            printf("Número precisa ser positivo. Tente novamente.\n");
            printf("Digite um inteiro positivo (%d/5): ", i + 1);
            scanf("%i", &num[i]);
        }
    }
}

void soma_divisores(int num[5]) {
    for (int i = 0; i < 5; i++) {
        int soma = 0;
        for (int j = 1; j < num[i]; j++) {
            if (num[i] % j == 0) {
                soma += j;
            }
        }
        printf("A soma dos divisores de %i é: %i\n", num[i], soma);
    }
}

void cal_medias(int notas[3]) {
    char escolha;
    float media;

    printf("---Codigo das medias---\n");
    printf("A) Media Aritmetica\n");
    printf("P) Media Ponderada\n");
    printf("H) Media Harmonica\n");
    printf("Digite Sua Escolha: ");
    scanf(" %c", &escolha);

    if (escolha == 'A' || escolha == 'a') {
        media = (notas[0] + notas[1] + notas[2]) / 3.0;
        printf("A media aritmetica é %.2f\n", media);
    }
    else if (escolha == 'P' || escolha == 'p') {
        media = (notas[0] * 0.5) + (notas[1] * 0.3) + (notas[2] * 0.2);
        printf("A media ponderada é %.2f\n", media);
    }
    else if (escolha == 'H' || escolha == 'h') {
        media = 3.0 / (1.0/notas[0] + 1.0/notas[1] + 1.0/notas[2]);
        printf("A media harmonica é %.2f\n", media);
    }
    else {
        printf("Opção inválida!\n");
    }
}