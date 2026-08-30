/*
PROGRAM: COUNT THE NUMBER OF DIGITS,LETTERS AND SPECIAL CHARACTERS IN A STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while (size <= 0)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    getchar();
    char string[size];
    printf("ENTER THE STRING: ");
    fgets(string, size+1, stdin);
    int i = 0, letters = 0, digits = 0, special = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 33 && string[i] <= 127)
        {

            if (string[i] >= '0' && string[i] <= '9')
            {
                digits++;
                i++;
            }
            else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
            {
                letters++;
                i++;
            }
            else
            {
                special++;
                i++;
            }
        }
        else
        {
            i++;
            continue;
        }
    }
    printf("NUMBER OF DIGITS: %d\n", digits);
    printf("NUMBER OF LETTERS: %d\n", letters);
    printf("NUMBER OF SPECIAL CHARACTERS: %d\n", special);
    return 0;
}