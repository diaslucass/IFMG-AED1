#include <stdio.h>

int main() {
    int n1, n2;

    // Receber o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    // Receber o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    // Verificar se os números são iguais
    if (n1 == n2) {
        // Se forem iguais, mostrar a soma
        printf("%d + %d = %d \n", n1, n2, n1 + n2);
    } else {
        // Se forem diferentes, mostrar o produto
        printf("%d x %d = %d \n", n1, n2, n1 * n2);
    }

    return 0;
}
