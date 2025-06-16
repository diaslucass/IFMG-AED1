#include <stdio.h>

int main() {
    int tempNum, sum;

    for (int i = 0; i <= 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &tempNum);

        sum = sum + tempNum;
    }

    printf("A soma dos números é: %d\n", sum);

    return 0;
}
