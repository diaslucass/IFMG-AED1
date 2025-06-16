#include <stdio.h>

int main() {
    int nums[] = {1, 0, 5, -2, -5, 7};
    int sum = nums[0] + nums[1] + nums[5];

    printf("O valor da soma é: %d\n", sum);

    nums[4] = 100;
    
    for (int i = 0; i < 6; i++) {
        printf("O valor do elemento %d é: %d\n", i, nums[i]);
    }

    return 0;
}