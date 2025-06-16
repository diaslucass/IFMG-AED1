#include <stdio.h>

int main() {
    int numero, divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    printf("O numero %d tem %d divisores\n", numero, divisores);

    return 0;
}
