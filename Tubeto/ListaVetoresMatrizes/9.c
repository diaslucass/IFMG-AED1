#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2];
    int escolha = 0;
    int constante;

    printf("Preencha a primeira matriz (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nPreencha a segunda matriz (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    while (escolha != 5) {
        printf("\nEscolha uma opção:\n");
        printf("1 - Somar as duas matrizes\n");
        printf("2 - Subtrair a primeira matriz da segunda\n");
        printf("3 - Adicionar uma constante às duas matrizes\n");
        printf("4 - Imprimir as matrizes\n");
        printf("5 - Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        printf("\n");

        switch (escolha) {
            case 1:
                printf("Soma das matrizes:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix1[i][j] + matrix2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Subtração da primeira pela segunda matriz:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix1[i][j] - matrix2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Digite uma constante: ");
                scanf("%d", &constante);

                printf("Matriz 1 + %d:\n", constante);
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix1[i][j] + constante);
                    }
                    printf("\n");
                }

                printf("Matriz 2 + %d:\n", constante);
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix2[i][j] + constante);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Matriz 1:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix1[i][j]);
                    }
                    printf("\n");
                }

                printf("Matriz 2:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        printf("%4d", matrix2[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}
