/*
PROGRAM: COUNT H0W MANY SPACES ARE THERE IN A SENTENCE
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
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings, size, stdin);
    int i = 0, count = 0;
    while (strings[i] != '\0')
    {
        if (strings[i] == ' ')
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("NUMBER OF SPACES IN THE GIVEN SENTENCE: %d", count);
    return 0;
}