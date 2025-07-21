#include <stdio.h>

int main()
{

    char string[100];
    char str [100];
    printf("Write a string \n");
    int count = 0;
    if (fgets(string, sizeof(string), stdin))
    {
        while (str[count] != '\0' && str[count] != '\n')
        {
            count++;
        }
    }
    else
    {
        printf("Error entering input. \n");
    }

    count++; 

    printf("The string has %d characters \n", count);

    return 0;
}