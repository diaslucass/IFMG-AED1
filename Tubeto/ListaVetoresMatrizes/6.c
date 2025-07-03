#include <stdio.h>

int main() {
    int matrix[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite valores para preencher a matriz: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (i < j) {
                soma += matrix[i][j];
            }
        }
    }

    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);

    return 0;
}
