#include <stdio.h>
#include <string.h>


void contador_letras(int a, int b, int c, char p1[30], char p2[30], char p3[30]);
void concatenador(char p1[30], char p2[30], char p3[30]);

int main(void) {
    int a, b, c, op;
    char p1[30], p2[30], p3[30];

    printf("---------------Estudo de Manipulação de Strings----------------\n");
    printf("1) Contador de letras de três strings\n");
    printf("2) Concatenador de strings, P1 e P2 em P3\n");
    printf("---------------------------------------------------------------\n");
    printf("Digite sua opção:\n");
    scanf("%i", &op);

    switch(op) {
        case 1:
            printf("---Contador---\n");
            printf("Digite Três palavras:\n");
            scanf("%s %s %s", p1, p2, p3);
            contador_letras(a, b, c, p1, p2, p3);
            break;

        case 2:
            printf("---Concatenador De Palavras---\n");
            printf("Digite Duas palavras:\n");
            scanf("%s %s", p1, p2);
            concatenador(p1, p2, p3);
            break;

        default:
            printf("Operação Invalida!");
    }
    return 0;
}

void concatenador(char p1[30], char p2[30], char p3[30]) {
    strcpy(p3, p1);  // Primeiro copia p1 para p3
    strcat(p3, p2);  // Depois concatena p2 em p3

    printf("P1 e P2 concatenadas em P3: %s\n", p3);
}

void contador_letras(int a, int b, int c, char p1[30], char p2[30], char p3[30]) {
    a = strlen(p1);
    b = strlen(p2);
    c = strlen(p3);
    printf("Numero de letras:\n");
    printf("P1: %i\n", a);
    printf("P2: %i\n", b);
    printf("P3: %i\n", c);
}