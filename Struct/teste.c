#include <stdio.h>
#include <string.h>
    struct pessoa usuario1{
        long int celular;
        char nome[30];
        long int celular= 235567234;
        strcpy(nome, "Kevin Meireles");
    }

    int main(void){
        struct pessoa usuario1;
        printf("Dados Usuario\n");
        printf("Celular:%li", usuario1.celular);
        printf("Nome: %s", usuario1.nome);
        return 0;
    }