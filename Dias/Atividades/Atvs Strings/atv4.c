#include <stdio.h>
#include <stdbool.h>

int main()
{
    char str1[100], str2[100];
    int isFalse = true, i = 0;

    printf("Write a string: ");
    fgets(str1, 100, stdin);

    printf("Write another string: ");
    fgets(str2, 100, stdin);


    // Loop para comparar as strings
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            isFalse = 0;
            break;
        }
        i++;
    }

    if (isFalse && str1[i] == str2[i]) {
        printf("they match.\n");
    } else {
        printf("they're diff.\n");
    }

    return 0;
}