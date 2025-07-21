#include <stdio.h>
#include <stdbool.h>

int main() {
    char busca[6], texto[21];
    int i, j;
    bool isTrue = false;

    printf("Write the search string (max 5 characters): ");
    fgets(busca, 6, stdin);

    getchar(); // consome o '\n' deixado pelo fgets

    printf("Write a text (max 20 characters): ");
    fgets(texto, 21, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        isTrue = 1;
        for (j = 0; busca[j] != '\0' && busca[j] != '\n'; j++) {
            if (texto[i + j] != busca[j]) {
                isTrue = false;
                break;
            }
        }

        if (isTrue) {
            printf("The string \"%s\" is within \"%s\"\n", busca, texto);
            return 0;
        }
    }

    printf("The string \"%s\" is not within \"%s\"\n", busca, texto);

    return 0;
}
