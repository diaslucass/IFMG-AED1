#include <stdio.h>
#include <math.h>

int main() {
    int v[10];
    int n = 10;
    float media = 0, resultado = 0;

    puts("Digite um valor para o vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        media = media + v[i];
    }

    media = media / n;

    for (int i = 0; i < n; i++) {
        resultado = resultado + pow(v[i] - media, 2);
    }

    resultado = resultado / n;
    resultado = sqrt(resultado);

    printf("Resultado: %f\n", resultado);

    return 0;
}
s