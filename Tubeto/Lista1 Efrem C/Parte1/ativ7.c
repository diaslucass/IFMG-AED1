#include <stdio.h>

// Função para calcular o peso ideal de um homem
double pesoHomem(double altura) {
    return 72.7 * altura - 58;
}

// Função para calcular o peso ideal de uma mulher
double pesoMulher(double altura) {
    return 62.1 * altura - 44.7;
}

int main() {
    double altura;
    char sexo;

    // Receber a altura do usuário
    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);

    // Receber o sexo do usuário
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    // Verificar o sexo e calcular o peso ideal correspondente
    if (sexo == 'M' || sexo == 'm') {
        printf("Seu peso ideal é %.2lf kg.\n", pesoHomem(altura));
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Seu peso ideal é %.2lf kg.\n", pesoMulher(altura));
    } else {
        // Caso o sexo informado seja inválido
        printf("Sexo inválido.\n");
    }

    return 0;
}
