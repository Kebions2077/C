#include<stdio.h>
int soma(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int pot(int a);

    int main (void) {
        int a,b,c,op;
        printf("|------------------Calculadora------------------|\n");
        printf("1) Soma\n");
        printf("2) Subtração\n");
        printf("3) Multiplicação\n");
        printf("4) Divisão\n");
        printf("5) Potenciação\n");
        printf("--------------------------------------------------\n");
        printf("Digite a Operação selecionada:\n");
        scanf("%i", & op);
        switch (op) {
            case 1:
                printf("---Soma---\n");
                printf("Digite o primeiro numero:\n");
                scanf("%i", & a);
                printf("Digite o segundo numero:\n");
                scanf("%i", &b);
                c=soma(a,b);
                printf("Resultado Da Soma: %i", c);

                break;
            case 2:
                printf("---Subtração---\n");
                printf("Digite o primeiro numero:\n");
                scanf("%i", & a);
                printf("Digite o segundo numero:\n");
                scanf("%i", &b);
                c=sub(a,b);
                printf("Resultado da Subtração é:%i", c);
                break;
            case 3:
                printf("---Multiplicação---\n");
                printf("Digite o primeiro numero:\n");
                scanf("%i", & a);
                printf("Digite o segundo numero:\n");
                scanf("%i", &b);
                c=mul(a,b);
                printf("Resultado da multiplicação é:%i", c);
                break;
            case 4:
                printf("---Divisão---\n");
                printf("Digite o primeiro numero:\n");
                scanf("%i", & a);
                printf("Digite o segundo numero:\n");
                scanf("%i", &b);
                c=div(a,b);
                printf("Resultado da divisão é:%i", c);
                break;
            case 5:
                printf("---Potenciação---\n");
                printf("Digite o numero:\n");
                scanf("%i",&a);
                c=pot(a);
                printf("O resultado da potenciação:%i",c);
                break;
            default:
                printf("Opção invalida!!\n");
                break;
        }
        return 0;
    }
        int soma(int a,int b) {
            return a+b;
     }
        int sub(int a, int b) {
            return a-b;
     }
        int div(int a, int b) {
            return a/b;
     }
        int mul(int a, int b) {
         return a*b;

    }
        int pot(int a) {
         return a*a;
     }