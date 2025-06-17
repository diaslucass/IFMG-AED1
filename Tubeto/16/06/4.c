#include <stdio.h>

int main() {
    int nums[5];

    printf("Digite um número: ");
    scanf("%d", &nums[0]);

    int maior = nums[0];
    int indiceMaior = 0;
    int indiceMenor = 0;
    int menor = nums[0];


    for (int i = 1; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (nums[i] > maior) {
            maior = nums[i];
            indiceMaior = i;
        }

        if (nums[i] < menor) {
            menor = nums[i];
            indiceMenor = i;
        }
    }

    printf("O maior número é %d, encontrado no índice %d.\n", maior, indiceMaior);
    printf("O menor número é %d, encontrado no índice %d.\n", menor, indiceMenor);


    return 0;
}