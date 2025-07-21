#include <stdio.h>

int main()
{
    printf("Enter a string \n");

    // Fgets( VARIAVEL, TAMANHO DA VARIAVEL, TIPO DE INPUT)

    char string[100];
    if (fgets(string, sizeof(string), stdin))
    {
        printf("You entered a valid string, %s \n", string);
    }
    else
    {
        printf("Error entering input. \n");
    }

    return 0;
}