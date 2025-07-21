#include <stdio.h>

int main()
{
    char string[100];
    char character;
    int count = 0;

    printf("Enter a string (max 100 characters): \n");\

    // Using fgets to read a string from standard input and comparing if it's valid
    if (fgets(string, 101, stdin))
    {
        printf("Enter a character to count in the string: \n");
        scanf(" %c", &character); // Note the space before %c to consume any newline character left in the input buffer

        for (int i = 0; string[i] != '\0'; i++)
        {
            if (string[i] == character)
            {
                count++;
            }
        }

        printf("The character '%c' appears %d times in the string.\n", character, count);
    }
    else
    {
        printf("Error entering input.\n");
    }

    return 0;
}