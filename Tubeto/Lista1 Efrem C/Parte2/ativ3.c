#include <stdio.h>

int ePar(int numero) {
    return numero % 2 == 0;
}

int main() {

    printf("Digite um numero: ");
    int numero;
    scanf("%d", &numero);
    printf("O numero %d é %s\n", numero, ePar(numero) ? "par" : "impar");
    return 0;
}
