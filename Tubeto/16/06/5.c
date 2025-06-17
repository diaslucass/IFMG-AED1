#include <stdio.h>

int main() {
    int nums[5];
    int repeated;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (i != j) {  
                if (nums[i] == nums[j] && nums[i] != repeated) {
                    printf("O número %d foi digitado mais de uma vez.\n", nums[i]);
                    repeated = nums[i];
                    break;  // Para evitar múltiplas mensagens para o mesmo número
                }
            }
        }
    }
    return 0;
}

// i j
// 0 1 2 3 4