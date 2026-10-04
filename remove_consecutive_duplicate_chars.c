/*
PROGRAM: REMOVE THE CONSECUTIVE DUPLICATE CHARACTERS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <stdlib.h>
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
    int i = 0;
    while (strings[i] != '\0')
    {
        int duplicate = 0;
        if (strings[i] == strings[i - 1])
        {
            i++;
            continue;
        }
        else
        {
            printf("%c", strings[i]);
            i++;
        }
    }
    return 0;
}