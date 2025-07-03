#include <stdio.h>

int main() {
    int matrix[10][10];


    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                matrix[i][j] = (2*i) + (7*j) - 2;
            } else if (i == j) {
                matrix[i][j] = ((i * i) * 3) - 1;
            } else {
                matrix[i][j] = ((i * i * i) * 4) - ((j * j) * 5) + 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}
