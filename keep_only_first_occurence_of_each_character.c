/*
PROGRAM: KEEP ONLY THE FIRST OCCURENCE OF EACH CHARACTER
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
    int start = 0, end = 0, i = 0;
    while (strings[i] != '\0')
    {
        if (strings[i] == ' ')
        {
            end = i - 1;
            for (int j = start; j <= end; j++)
            {
                int duplicate = 0;
                for (int k = start; k < j; k++)
                {
                    if (strings[k] == strings[j])
                    {
                        duplicate = 1;
                        break;
                    }
                }
                if (duplicate == 0)
                {
                    printf("%c", strings[j]);
                }
                else
                {
                    continue;
                }
            }
            printf(" ");
            start = i + 1;
            i++;
        }
        else if(strings[i]=='\n'){
            end = i - 1;
            for (int j = start; j <= end; j++)
            {
                int duplicate = 0;
                for (int k = start; k < j; k++)
                {
                    if (strings[k] == strings[j])
                    {
                        duplicate = 1;
                        break;
                    }
                }
                if (duplicate == 0)
                {
                    printf("%c", strings[j]);
                }
                else
                {
                    continue;
                }
            }
            printf(" ");
            start = i + 1;
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    return 0;
}