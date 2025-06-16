#include <stdio.h>

int main() {

    char operacao;
    double num1, num2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &num1);

    printf("Digite a operação (+, -, /, x): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo valor: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisão por zero\n");
            }
            break;
        case 'x':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        default:
            printf("Operação inválida\n");
            break;
    }

    return 0;
}
