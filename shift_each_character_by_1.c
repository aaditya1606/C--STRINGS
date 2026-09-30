/*
PROGRAM: SHIFT EACH CHARACTER BY 1
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
        if (strings[i] >= 'A' && strings[i] < 'Z')
        {
            printf("%c", strings[i] + 1);
            i++;
        }
        else if (strings[i] >= 'a' && strings[i] < 'z')
        {
            printf("%c", strings[i] + 1);
            i++;
        }
        else if (strings[i] == 'z' || strings[i] == 'Z')
        {
            printf("%c", strings[i] - 25);
            i++;
        }
        else if(strings[i]==' '){
            printf("%c",strings[i]);
            i++;
        }
        else
        {
            continue;
            i++;
        }
    }
    return 0;
}