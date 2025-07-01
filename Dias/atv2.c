#include <stdio.h>

int main () {
    int matrix[2][2] = {
        {2, 5},
        {6, 8}
    };
    int soma = matrix[0][1] + matrix[0][0] + matrix[1][0] + matrix[1][1];
    printf("%i", soma);
    return 0;

    int matriz[3][3] = {
        {2,6,8},
        {6,8,12},
        {9,18,46}
    };
    

    int linhas = sizeof(matriz) / sizeof(matriz[0]);
    int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0])
    
    soma = 0;
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            soma += matriz[i][j]
        }
    }

    printf("%i", soma);
}


