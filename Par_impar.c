#include <stdio.h>
int leitura(int num,int resultado);
int main (void) {
    int num,resultado;
    printf("===Leitor Pares e Impares===\n");
    printf("1) Par\n");
    printf("0) Impar\n");
    printf("___________________________________\n");
    resultado=leitura(num,resultado);
    printf("Resultado da leitura:%i\n",resultado);
    if (resultado==1) {
        printf("Portanto o Numero é Impar\n");
    }
    if (resultado==0) {
        printf("Portanto o numero é Par\n");
    }
    return 0;
}
int leitura(int num, int resultado) {
    printf("Digite o numero:\n");
    scanf("%i", &num);
    if (num %2 ==0) {
        resultado=0;
        return resultado;
    }
    else {
        resultado=1;
        return resultado;
    }

}