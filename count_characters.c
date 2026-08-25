/*
PROGRAM: COUNT HOW MANY CHARACTERS(EXCLUDING SPACES) ARE IN THE STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    char strings[size];
    getchar();
    printf("ENTER THE STRING: ");
    fgets(strings, size, stdin);
    int i = 0;
    int count = 0;
    while (strings[i] != '\0')
    {
        if (strings[i] == ' ')
        {
            i++;
            continue;
        }
        count++;
        i++;
    }
    printf("COUNT OF CHARACTERS: %d", count);
    return 0;
}