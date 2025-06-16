#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(senha, "1234") == 0) {
        printf("Senha correta!\n");
    } else {
        printf("Senha incorreta!\n");
    }

    return 0;
}
