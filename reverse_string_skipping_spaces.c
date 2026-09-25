/*
PROGRAM: REVERSE STRING BUT SKIP SPACES
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
    int stringsize = strlen(strings);
    int i = stringsize;
    while (i >= 0)
    {
        if (strings[i] == ' ')
        {
            continue;
            i--;
        }
        printf("%c", strings[i]);
        i--;
    }
    return 0;
}