#include <stdio.h>
#include <string.h> // Para usar strlen() 


int main(){
    char string[100];

    // 1
    printf("Enter a string");

    // Fgets( VARIAVEL, TAMANHO DA VARIAVEL, TIPO DE INPUT)

    if(fgets(string, sizeof(string), stdin)){
        printf("You entered a valid string, %s \n", string);
    } else {
        printf("Error entering input. \n"); 
    }

    // 2 
    printf("Another string");
    int count = 0;
    if(fgets(string, sizeof(string), stdin)){
        while(str[count] != '\0') {
            count++;
        }    
    } else {
        printf("Error entering input. \n"); 
    }

    printf("Another string");
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  
        }
        i++;
    }



    


    return 0;
}