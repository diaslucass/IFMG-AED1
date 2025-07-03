#include <stdio.h>

int main() {

    int matrix[4][4];
    int maiores_que_dez = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite valores para preencher a matriz: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > 10) {
                maiores_que_dez++;
            }
        }

    }

    printf("Quantidade de elementos maiores que dez: %d\n", maiores_que_dez);

    return 0;
}
