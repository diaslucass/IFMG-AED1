#include <stdio.h>

int valorJaInseridoNaIntersecao(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int vetorA[10], vetorB[10], vetorIntersecao[10];
    int indice = 0;

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
            if (vetorA[i] == vetorB[j]) {
                if (!valorJaInseridoNaIntersecao(vetorIntersecao, indice, vetorA[i])) {
                    vetorIntersecao[indice++] = vetorA[i];
                }
                break;
            }
        }
    }

    printf("Interseção dos vetores:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetorIntersecao[i]);
    }
    printf("\n");

    return 0;
}
