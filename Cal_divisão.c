#include <stdio.h>
    float cal(int n1,int n2,float resultado);
        int main (void) {
            int n1,n2;
            float resultado;
                printf("Digite o primeiro numero:\n");
                    scanf("%i", & n1);
                printf("Digite o segundo numero:\n");
                    scanf("%i", & n2);
            resultado= cal(n1,n2,resultado);
            printf("O Resultado da divisão:%.2f",resultado);
                return 0;
        }
float cal(int n1,int n2, float resultado) {
            resultado= n1/n2;
            return resultado;
        }