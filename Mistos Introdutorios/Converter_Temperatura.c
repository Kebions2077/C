#include <stdio.h>

    void cel_fah(float temp);
    void fah_cel(float temp);
    void cel_kev(float temp);

        int main (void) {
            float temp;
            int op;
                printf("---------------Conversor de temperatura----------------\n");
                printf("1) Celcius>>>Fahrenheit\n");
                printf("2) Fahrenheit>>>Celcius\n");
                printf("3) Celcius>>>Kelvin\n");
                printf("-------------------------------------------------------\n");
                    printf("Digite sua opção:");
                        scanf("%i", & op);
            switch (op) {
                case 1:
                    printf("Conversão Celcius para Fahrenheit\n");
                    printf("Digite sua temperatura em Celcius:\n");
                        scanf("%f",& temp);
                    cel_fah(temp);
                    break;

                case 2:
                    printf("Conversão Fahrenheit para Celcius\n");
                    printf("Digite sua temperatura em Fahrenheit:\n");
                    scanf("%f",& temp);
                    fah_cel(temp);
                    break;

                case 3:
                    printf("Conversão Celcius Para Kelvin:\n");
                    printf("Digite sua temperatura em Celcius:\n");
                    scanf("%f",& temp);
                    cel_kev(temp);
                    break;
                default:
                    printf("Opção invalida!");
                    break;
            }
            return 0;
        }
    void cel_fah(float temp) {
               float resultado= (temp * 9.0 / 5.0) + 32.0;
            printf("Resultado:%.2f", resultado);
        }
    void fah_cel(float temp) {
                float resultado= (temp - 32.0) * 5.0 / 9.0;
            printf("Resultado: %.2f", resultado);

        }
    void cel_kev(float temp) {
                float resultado= temp + 273.15;
            printf("Resultado: %.2f", resultado);

        }


