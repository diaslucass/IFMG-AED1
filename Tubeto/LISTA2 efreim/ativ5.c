#include <stdio.h>

int main() {

    int maior, temp;

    printf("Digite um número: ");
    scanf("%d", &maior);

    for (int i = 0; i < 9; i++) {
        printf("Digite um número: ");
        scanf("%d", &temp);
        if (temp > maior) {
            maior = temp;
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
