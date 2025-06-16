#include <stdio.h>

int main() {
    double num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("O primeiro número é maior que o segundo \n");
    } else if (num1 < num2) {
        printf("O primeiro número é menor que o segundo \n");
    } else {
        printf("Os números são iguais \n");
    }

    return 0;
}
