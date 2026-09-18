/*
PROGRAM: REVERSE EACH WORD IN A SENTENCE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while (size <= 1)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    getchar();
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings, size, stdin);
    int i = 0;
    int end = 0, start = 0;
    while (strings[i] != '\0' && i < size)
    {
        if (strings[i] == ' ' || strings[i+1]=='\0')
        {
            end = i - 1;
            for (int k = end; k >= start; k--)
            {
                printf("%c", strings[k]);
            }
            printf(" ");
            start = i + 1;
            i++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}