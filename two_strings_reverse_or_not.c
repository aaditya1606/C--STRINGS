/*
PROGRAM: CHECK IF TWO STRINGS ARE REVERSE OF EACH OTHER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int size1, size2;
    printf("ENTER THE SIZE OF THE STRINGs: ");
    scanf("%d", &size1);
    size2 = size1;
    while (size1 <= 1)
    {
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size1);
    }
    char strings1[size1];
    char strings2[size2];
    printf("ENTER THE FIRST STRING: ");
    scanf("%s", &strings1);
    printf("ENTER THE SECOND STRING: ");
    scanf("%s", &strings2);
    int i = 0;
    int j = strlen(strings2) - 1;
    int reverse = 1;
    while (strings1[i] != '\0' && j != 0)
    {
        if (strings1[i] != strings2[j])
        {
            reverse = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if (reverse == 1)
    {
        printf("STRINGS ARE REVERSE OF EACH OTHER!!");
    }
    else
    {
        printf("STRINGS ARE NOT REVERSE OF EACH OTHER!!");
    }
    return 0;
}