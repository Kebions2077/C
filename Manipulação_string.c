#include <stdio.h>
#include <string.h>
    void preenche(char string1[30],char string2[30],char string3[30]);
    void concatena(char string1[30],char string2[30]);
    void copia(char string1[30],char string2[30],char string4[30]);
        int main(void) {
            char string1[30],string2[30],string3[30],string4[30];
            int op;

            preenche(string1,string2,string3);
            printf("---------Tabela Manipulação basica string:---------\n");
            printf("1) Concatena string 1 à 2\n");
            printf("2)Copia string 1 á 4 e exibe a 2\n");
            printf("Digite a opção:\n");
            scanf("%i", &op);
            switch (op) {
                case 1:
                    printf("Concatenação:\n");
                    concatena(string1,string2);
                    break;
                case 2:
                    printf("Copiar\n");
                    copia(string1,string2,string4);
                    break;
                default:
                    printf("opção invalida!!\n");
            }
            return 0;
        }





            void preenche( char string1[30], char string2[30], char string3[30]) {
                printf ("Digite a palavra 1:");
                scanf("%s", string1);
                printf ("Digite a palavra 2:");
                scanf("%s", string2);
                printf ("Digite a palavra 3:");
                scanf("%s", string3);
                printf("Palavras armazenadas:\n");
                printf("String1:%s \n String2:%s \n string3:%s \n", string1,string2,string3);
            }
            void concatena(char string1[30],char string2[30]) {
                strcat(string2,string1);
                printf("string concatenada:%s", string2);
            }
            void copia(char string1[30],char string2[30],char string4[30]) {
                strcpy (string4,string1);
                printf("String 4 com o conteeudo da string 1\n");
                printf("String2 normal:%s", string2);
            }
