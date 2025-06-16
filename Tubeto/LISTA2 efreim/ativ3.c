#include <stdio.h>

int main() {
    int numeroUsuario;

    printf("Digite um valor: ");
    scanf("%d", &numeroUsuario);

    for(int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numeroUsuario, i, numeroUsuario * i);
    }

    return 0;
}
