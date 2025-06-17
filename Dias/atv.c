#include <stdio.h>
#include <stdlib.h>

int main() {
    atv1();
    atv2();
    atv3();
    atv4();
    atv5();


    return 0;
}

void atv1(){
    int vetor[5] = {1, 0, 5, -2, -5, 7};
    int soma = vetor[0] + vetor[1] + vetor[5];
    printf("O valor da soma é: %d\n", soma);
    vetor[4] = 100; 
    for (int i = 0; i < 5; i++) {
        printf("O valor do elemento %d é: %d\n", i, vetor[i]);
    }
}

void atv2() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Os valores digitados foram:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: %d\n", i, vetor[i]);
    }
}

void atv3() {
    int vetor[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
    int reverse[5];
    for(int i = 0; i < 5; i++) {
        reverse[i] = vetor[4 - i];
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", reverse[i]);
    }
}

void atv4(){
    int vetor[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int maior = 0;
    int menor = 99999;
    for(int i = 0; i < 5; i++) {
        if(vetor[i] > maior) {
            maior = i;
        }
        if(vetor[i] < menor) {
            menor = i;
        }
    }
    printf("O índice do maior elemento é: %d\n", maior);
    printf("O índice do menor elemento é: %d\n", menor);
}

void atv5(){
    int vetor[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++) {
            if (vetor[i] == vetor[j]){
                printf("Existem elementos repetidos no vetor.\n");
            } else {
                printf("Não existem elementos repetidos no vetor.\n");
                break;
            }
        }
    }
}