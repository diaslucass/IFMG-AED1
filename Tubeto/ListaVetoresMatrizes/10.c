#include <stdio.h>

int main() {
    int matrixA[3][3], matrixB[3][3], matrixC[3][3];

    printf("Preencha a matriz A (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Preencha a matriz B (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
        }
    }

    printf("Matriz C (C = A * B: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matrixC[i][j]);
        }
        printf("\n");
    }



    return 0;
}
