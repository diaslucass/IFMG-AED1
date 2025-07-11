#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorIntersecao[10];
    int repeated = 0;

    for (int i = 0; i < 10; i++) {
        vetorIntersecao[i] = 0;
    }

    printf("Digite 10 números para o primeiro vetor:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 números para o segundo vetor:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetorA[i] == vetorB[j] && vetorA[i] != repeated) {
                vetorIntersecao[i] = vetorA[i];
                repeated = vetorA[i];
                break;
            }
        }
    }

    printf("Interseção dos vetores:\n");
    for (int i = 0; i < 10; i++) {
        if (vetorIntersecao[i] != 0) {
            printf("%d ", vetorIntersecao[i]);
        }
    }
    printf("\n");

    return 0;
}
