/*
PROGRAM: TAKE TWO STRINGS AND PRINT THEM CONCATENATED
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size1, size2;
    printf("ENTER THE SIZE OF THE FIRST STRING: ");
    scanf("%d", &size1);
    getchar();
    printf("ENTER THE SIZE OF THE SECOND STRING: ");
    scanf("%d", &size2);
    getchar();
    char strings1[size1], strings2[size2];
    printf("ENTER THE FIRST STRING: ");
    gets(strings1);
    printf("ENTER THE SECOND STRING: ");
    gets(strings2);
    strcat(strings1, strings2);
    printf("CONCATENATED STRING: %s", strings1);
    return 0;
}