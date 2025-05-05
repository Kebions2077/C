#include <stdio.h>
   void cal_dobro(int num, int dobro);
        int main (void) {
            int num,dobro;
            cal_dobro(num,dobro);
            return 0;
        }
    void cal_dobro(int num,int dobro) {
            printf("Digite o numero:\n");
                scanf("%i", &num);
            dobro= num * 2;
            printf("O Numero é:%i e seu dobro é:%i", num, dobro);
        }