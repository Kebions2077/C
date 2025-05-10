#include <stdio.h>
    void preenche(int vet[10]);
    int cal_maior (int vet[10]);
    int cal_soma( int vet[10]);
    float cal_media( int soma);

        void preenche(int vet[10]){
            int x;
            x=0;
            for(x=0;x<10;x++){
                printf("Digite a posição [%i]", x);
                    scanf("%i", &vet[x]);
            }
        }
        int cal_soma(int soma,int vet[10]){
            soma= vet[0]+vet[1]+vet[2]+vet[3]+vet[4]+vet[5]+vet[6]+vet[7]+vet[8]+vet[9];
            return soma;
        }
        float cal_media( int soma){
             
                return soma / 10; 
        }
        int cal_maior(int maior, int vet[10]){
            int x;
            x=0;
            maior=vet[0];
                for(x=0;x<10;x++){
                    if (vet[x]>maior){
                        maior=vet[x];
                    }
                }
                return maior;
        }

        int main(void){
            int x,vet[10], maior, soma;
            float media;
            x=0;
            
            vet= preenche(vet);
            
            printf("O vetor de 10 posições:");
            
            for(x=0;x<10;x++){
                printf("[%i],vet[x]");
            }
            
            cal_soma=soma(vet);
            
            printf("A soma de todos os valores do vetor %i", soma);
            
            cal_media= cal_media(soma);
            
            printf("A media Dos elementos do vetor:%.2f", media);

            cal_maior= maior(vet);

            printf("O maior numero armazenado no vetor é: %i", maior);
            
        }