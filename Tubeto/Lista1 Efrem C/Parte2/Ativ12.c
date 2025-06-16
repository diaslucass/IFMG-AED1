#include <stdio.h>

int main() {

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Triângulo equilátero");
    } else if (a == b || b == c || a == c) {
        printf("Triângulo isósceles");
    } else {
        printf("Triângulo escaleno");
    }

    return 0;
}
