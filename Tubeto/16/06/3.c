#include <stdio.h>

int main() {

    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf(" %d", &nums[i]);
    }
    printf("Os números digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Os números digitados em ordem inversa foram:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    

    return 0;
}