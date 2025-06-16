#include <stdio.h>

// Função para verificar se o número é par
int ePar(int n1) {
    return n1 % 2 == 0;
}

int main() {
    int n;

    // Receber número do usuário
    printf("Digite um numero: ");
    scanf("%d", &n);

    // Verificar se é par ou ímpar
    if (ePar(n)) {
        printf("O numero %d é par\n", n);
    } else {
        printf("O numero %d é impar\n", n);
    }

    return 0;
}
