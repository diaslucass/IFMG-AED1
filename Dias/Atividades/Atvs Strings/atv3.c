#include <stdio.h>

int main()
{
    char string[100];
    int i = 0;


    // Validacao do tamanho da string e conversao pela tabela ASCII atraves da soma e subtracao de 32

    printf("Enter a string within 10 characters: \n");
    if (fgets(string, 11, stdin))
    {
        while (string[i] != '\0' && string[i] != '\n')
        {
            if (string[i] >= 'A' && string[i] <= 'Z')
            {
                string[i] = string[i] + 32; 
            }
            else if (
                string[i] >= 'a' && string[i] <= 'z')
            {
                string[i] = string[i] - 32; 
            }
            i++;
        }
        string[i] = '\0'; 
        printf("Converted string: %s\n", string);
    }
    else
    {
        printf("Error entering input.\n");
    }
}
