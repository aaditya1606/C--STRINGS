/*
PROGRAM: COUNT HOW MANY TIMES A GIVEN CHARACTER HAS APPEARED IN A STRING
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
    fgets(string, size, stdin);
    char character;
    printf("ENTER THE CHARACTER: ");
    scanf("%c", &character);
    int i = 0, count = 0;
    while (string[i] != '\0')
    {
        if (string[i] == character||string[i]==character+32||string[i]==character-32)
        {
            count++;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("NUMBER OF TIMES %c HAS APPEARED IN THE GIVEN STRING: %d", character, count);
    return 0;
}