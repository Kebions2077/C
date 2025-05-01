#include <stdio.h>
#include <math.h>

void preenche_vet1(int vet1[3]);
void preenche_vet2(int vet2[3]);
void soma_vetor(int vet1[3], int vet2[3], int r_soma[3]);
void sub_vetor(int vet1[3], int vet2[3], int r_sub[3]);
void m_escalar(int vet1[3], int vet2[3], int escalar, int r_escalar1[3], int r_escalar2[3]);
void cal_norma(int vet1[3], int vet2[3], int *norma1, int *norma2);
void cal_versor(int vet1[3]);

int main(void) {
    int vet1[3], vet2[3];
    int op1, op2;
    int r_soma[3], r_sub[3], escalar;
    int r_escalar1[3], r_escalar2[3];
    int norma1, norma2;

    printf("----------------------------Tabela De Estudos para um primeiro estudo de ALGA----------------------------\n");
    printf("1)Operações com Vetores: Soma, Subtração, Mult. Por Escalar\n");
    printf("2)Norma De Vetores (||v||):\n");
    printf("3)Versor(^v)\n");
    printf("4)Produto Escalar\n");
    printf("5)Projeção de um vetor sobre o outro\n");
    printf("6)Produto Vetorial\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("Digite Um Tópico:\n");
    scanf("%i", &op1);

    switch(op1) {
        case 1:
            printf("-----------Operações com Vetores: Soma, Subtração, Mult. Por Escalar-----------\n");
            printf("1) Soma\n");
            printf("2) Subtração\n");
            printf("3) Multiplicação Por Escalar\n");
            printf("----------------------------------------------------------------------------\n");
            printf("Digite uma opção:");
            scanf("%i", &op2);

            switch(op2) {
                case 1:
                    printf("---Soma---\n");
                    preenche_vet1(vet1);
                    preenche_vet2(vet2);
                    soma_vetor(vet1, vet2, r_soma);
                    break;
                case 2:
                    printf("---Subtração---\n");
                    preenche_vet1(vet1);
                    preenche_vet2(vet2);
                    sub_vetor(vet1, vet2, r_sub);
                    break;
                case 3:
                    printf("---Multiplicação por Escalar---\n");
                    preenche_vet1(vet1);
                    preenche_vet2(vet2);
                    printf("Digite o escalar: ");
                    scanf("%i", &escalar);
                    m_escalar(vet1, vet2, escalar, r_escalar1, r_escalar2);
                    break;
                default:
                    printf("Operação inválida com vetor!!!\n");
                    break;
            }
            break;
        case 2:
            printf("Norma de vetores:\n");
            preenche_vet1(vet1);
            preenche_vet2(vet2);
            cal_norma(vet1, vet2, &norma1, &norma2);
            printf("Norma do vetor 1: %d\n", norma1);
            printf("Norma do vetor 2: %d\n", norma2);
            break;
        // Adicione os outros casos aqui
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

void preenche_vet1(int vet1[3]) {
    for(int x = 0; x < 3; x++) {
        printf("Digite a posição %i do vetor 1: ", x);
        scanf("%i", &vet1[x]);
    }
    printf("Vetor 1 preenchido: ");
    for(int y = 0; y < 3; y++) {
        printf("(%i)", vet1[y]);
        if(y < 2) printf(", ");
    }
    printf("\n");
}

void preenche_vet2(int vet2[3]) {
    for(int x = 0; x < 3; x++) {
        printf("Digite a posição %i do vetor 2: ", x);
        scanf("%i", &vet2[x]);
    }
    printf("Vetor 2 preenchido: ");
    for(int y = 0; y < 3; y++) {
        printf("(%i)", vet2[y]);
        if(y < 2) printf(", ");
    }
    printf("\n");
}

void soma_vetor(int vet1[3], int vet2[3], int r_soma[3]) {
    r_soma[0] = vet1[0] + vet2[0];
    r_soma[1] = vet1[1] + vet2[1];
    r_soma[2] = vet1[2] + vet2[2];
    printf("Fórmula de soma entre Vetores: Soma = v1[0]+v2[0], v1[1]+v2[1], v1[2]+v2[2]\n");
    printf("Resultado da soma entre vetores: (%i, %i, %i)\n", r_soma[0], r_soma[1], r_soma[2]);
}

void sub_vetor(int vet1[3], int vet2[3], int r_sub[3]) {
    r_sub[0] = vet1[0] - vet2[0];
    r_sub[1] = vet1[1] - vet2[1];
    r_sub[2] = vet1[2] - vet2[2];
    printf("Fórmula de Subtração entre Vetores: Subtração = v1[0]-v2[0], v1[1]-v2[1], v1[2]-v2[2]\n");
    printf("Resultado da Subtração entre vetores: (%i, %i, %i)\n", r_sub[0], r_sub[1], r_sub[2]);
}

void m_escalar(int vet1[3], int vet2[3], int escalar, int r_escalar1[3], int r_escalar2[3]) {
    for(int i = 0; i < 3; i++) {
        r_escalar1[i] = escalar * vet1[i];
        r_escalar2[i] = escalar * vet2[i];
    }
    printf("Multiplicação pelo escalar %i do primeiro vetor: (%i, %i, %i)\n",
           escalar, r_escalar1[0], r_escalar1[1], r_escalar1[2]);
    printf("Multiplicação pelo escalar %i do segundo vetor: (%i, %i, %i)\n",
           escalar, r_escalar2[0], r_escalar2[1], r_escalar2[2]);
}

void cal_norma(int vet1[3], int vet2[3], int *norma1, int *norma2) {
    *norma1 = sqrt(vet1[0]*vet1[0] + vet1[1]*vet1[1] + vet1[2]*vet1[2]);
    *norma2 = sqrt(vet2[0]*vet2[0] + vet2[1]*vet2[1] + vet2[2]*vet2[2]);
}

void cal_versor(int vet1[3]) {
    int norma = sqrt(vet1[0]*vet1[0] + vet1[1]*vet1[1] + vet1[2]*vet1[2]);
    if(norma != 0) {
        printf("Versor: (%.2f, %.2f, %.2f)\n",
               (float)vet1[0]/norma,
               (float)vet1[1]/norma,
               (float)vet1[2]/norma);
    } else {
        printf("O vetor nulo não tem versor!\n");
    }
}