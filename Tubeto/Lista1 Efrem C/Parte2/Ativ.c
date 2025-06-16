#include <stdio.h>

int main() {
    int nota;

    // Solicita a nota do aluno
    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    // Verifica a situação do aluno com base na nota
    if (nota >= 7) {
        printf("Aprovado! \n");
    } else if (nota >= 5) {
        printf("Recuperação! \n");
    } else {
        printf("Reprovado! \n");
    }

    return 0;
}
