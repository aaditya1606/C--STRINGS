/*
PROGRAM: REMOVE ALL THE VOWELS FROM THE GIVEN STRING
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
    fgets(strings,size,stdin);
    int i = 0;
    while (strings[i] != '\0')
    {
        if (strings[i] == 'a' || strings[i] == 'e' || strings[i] == 'i' || strings[i] == 'o' || strings[i] == 'u' || strings[i] == 'A' || strings[i] == 'E' || strings[i] == 'I' || strings[i] == 'O' || strings[i] == 'U')
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