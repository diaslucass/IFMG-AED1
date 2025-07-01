#include <stdio.h>

int main() {
    int v[10];
    int n = 10;
    int media;

    puts("Digite um valor para o vetor: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        media = media + v[i];
    }

    media = media / n;



    return 0;
}
