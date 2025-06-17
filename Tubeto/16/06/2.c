#include <stdio.h>

int main() {
	int nums[10];

	for (int i = 1; i <= 10; i++) {
		nums[i - 1] = i;
	}

	printf("Os números são:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");

	return 0;
}
