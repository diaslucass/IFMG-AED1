#include <stdio.h>

int main() {
    int matrix[3][6];
    int soma_impares = 0;
    float soma_segunda_quarta = 0;

    puts("Digite os valores da matriz 3x6:");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matrix[i][j]);

            if (j % 2 == 0) soma_impares += matrix[i][j];
            if (j == 1 || j == 3) soma_segunda_quarta += matrix[i][j];
        }

        matrix[i][5] = matrix[i][0] + matrix[i][1];
    }

    puts("\nMatriz resultante:");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    printf("\nSoma das colunas ímpares: %d", soma_impares);
    printf("\nMédia das colunas 2 e 4: %.2f\n", soma_segunda_quarta / 6);

    return 0;
}
