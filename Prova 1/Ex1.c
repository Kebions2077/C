#include <stdio.h>

void calA(int A[5][5]);
void calB(int B[5][5]);
void calC(int A[5][5], int B[5][5], int C[5][5]);
void calD(int C[5][5], int D[5][5]);
void mostrar(int A[5][5], int B[5][5], int C[5][5], int D[5][5]);

void calA(int A[5][5]) {
    int x, y;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("Digite a posição[%i][%i]: ", x, y);
            scanf("%i", &A[x][y]);
        }
    }
}

void calB(int B[5][5]) {
    int x, y;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("Digite a posição[%i][%i]: ", x, y);
            scanf("%i", &B[x][y]);
        }
    }
}

void calC(int A[5][5], int B[5][5], int C[5][5]) {
    int x, y;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            C[x][y] = A[x][y] + B[x][y];
        }
    }
}

void calD(int C[5][5], int D[5][5]) {
    int x, y;
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            D[x][y] = C[y][x];
        }
    }
}

void mostrar(int A[5][5], int B[5][5], int C[5][5], int D[5][5]) {
    int x, y;
    
    printf("\nMatriz A:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%3i ", A[x][y]);
        }
        printf("\n");
    }
    
    printf("\nMatriz B:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%3i ", B[x][y]);
        }
        printf("\n");
    }
    
    printf("\nMatriz C (A + B):\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%3i ", C[x][y]);
        }
        printf("\n");
    }
    
    printf("\nMatriz D (Transposta de C):\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%3i ", D[x][y]);
        }
        printf("\n");
    }
    printf("--------------------------------\n");
}

int main(void) {
    int op, A[5][5], B[5][5], C[5][5], D[5][5];
    
    printf("\n-------------------Menu----------------------\n");
    printf("1) Calcular Matriz A e B\n");
    printf("2) Calcular Matriz C (A + B)\n");
    printf("3) Calcular Matriz D (Transposta de C)\n");
    printf("4) Mostrar Todas as Matrizes\n");
    printf("---------------------------------------------------\n");
    printf("Digite uma opção: ");
    scanf("%i", &op);
    
    switch(op) {
        case 1:
            printf("\nPreencha a Matriz A:\n");
            calA(A);
            printf("\nPreencha a Matriz B:\n");
            calB(B);
            break;
            
        case 2:
            calC(A, B, C);
            printf("\nMatriz C calculada (A + B)\n");
            break;
            
        case 3:
            calC(A, B, C);  
            calD(C, D);     
            printf("\nMatriz D calculada (Transposta de C)\n");
            break;
            
        case 4:
            mostrar(A, B, C, D);
            break;
            
        default:
            printf("Opção Inválida!\n");
    }
    
    return 0;
}