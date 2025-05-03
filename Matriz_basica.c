#include <stdio.h>
    void preenche_matriz(int mat[3][3]);
    void exibe_matriz(int mat[3][3]);
        int main (void) {
            int mat[3][3];
                preenche_matriz(mat);
                exibe_matriz(mat);

            return 0;
        }
    void preenche_matriz(int mat[3][3]) {
            int x,y;
            x=y=0;
            for (x=0;x<3;x++) {
                for (y=0;y<3;y++) {
                    printf("Digite a pos. [%i] [%i]:",x,y);
                        scanf("%i", & mat[x][y]);
                }
            }
        }
    void exibe_matriz(int mat[3][3]) {
            int x,y;
            x=y=0;
            for (x=0;x<3;x++) {
                for (y=0;y<3;y++) {
                    printf("[%i],", mat[x][y]);
                }

                }
            }