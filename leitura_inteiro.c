#include <stdio.h>
    int leitura(int num,int resultado);
        int main (void) {
            int num,resultado;
            printf("===Leitor Positivos e negativos===\n");
            printf("1) Positivo\n");
            printf("0) Negativo\n");
            printf("___________________________________\n");
            resultado=leitura(num,resultado);
            printf("Resultado da leitura:%i\n",resultado);
            if (resultado==1) {
                printf("Portanto o Numero é positivo\n");
            }
            if (resultado==0) {
                printf("Portanto o numero é negativo\n");
            }
            return 0;
        }
int leitura(int num, int resultado) {
            printf("Digite o numero:\n");
                scanf("%i", &num);
            if (num<0) {
                resultado=0;
                return resultado;
            }
            if (num>0) {
                resultado=1;
                return resultado;
            }

        }