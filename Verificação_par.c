#include <stdio.h>
void  checagem (int a, int b);
       int main(void){
            int a,b;
                printf("|--------------Checagem de Impar/Par--------------|\n");
                printf("Digite os Dois Numeros:\n");
                    scanf("%i %i", &a, &b);
                        checagem(a,b);
        return 0;
}

       void checagem(int a, int b) {
                if (a %2==0) {
                    printf("O Primeiro Numero é Par!");
                }
                else {
                    printf("O Primeiro Numero é Impar!");
                }
                if (b %2==0) {
                    printf("O Segundo Numero é Par!");
                }
                else {
                    printf("O Segundo Numero é Impar!!");
                }
            if ( a  == 0 ) {
                printf("O Primeiro Numero é 0!");
            }
            if (b==0) {
                printf("O Segundo Numero é 0;");
            }
        }