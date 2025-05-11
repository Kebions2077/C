#include <stdio.h>
#include <math.h>
   int cal_cubo(int num);
      int cal_cubo(int num){
        int exp;
        exp=3;
        
        return pow (num,exp);
      }  
      int main(void){
        int num,cubo;
        printf("Digite um numero para calcular o cubo:\n");
            scanf("%i", &num);
            cubo= cal_cubo(num);
            printf("O Cubo do numero %i: %i", num,cubo);
            return 0;

      }