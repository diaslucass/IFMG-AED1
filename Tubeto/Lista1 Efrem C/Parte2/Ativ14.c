#include <stdio.h>

int main() {

    double num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("O maior número é %.2lf\n", num1);
    } else if (num1 < num2 && num2 > num3) {
        printf("O maior número é %.2lf\n", num2);
    } else {
        printf("O maior número é %.2lf\n", num3);
    }

    return 0;
}
