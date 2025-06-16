#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Você pode assistir ao filme com classificação 16 anos.\n");
    } else {
        printf("Você não pode assistir ao filme com classificação 16 anos.\n");
    }

    return 0;
}
