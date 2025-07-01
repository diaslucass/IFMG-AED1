#include <stdio.h>

int main() {
    int a[5], b[5], c[5];

    printf("Digite os 5 números do vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite os 5 números do vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    printf("Vetor C (A - B):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");



    return 0;
}
