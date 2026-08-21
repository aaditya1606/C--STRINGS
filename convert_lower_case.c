/*
PROGRAM: CONVERT ALL THE CHARACTERS OF STRING TO LOWER CASE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    getchar();
    char string[size];
    printf("ENTER THE STRING: ");
    fgets(string, size, stdin);
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    printf("COVERTED STRING: ");
    puts(string);
    return 0;
}