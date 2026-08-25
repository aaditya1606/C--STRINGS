/*
PROGRAM: COUNT HOW MANY WORDS ARE THERE IN A SENTENCE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main()
{
    int size;
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d", &size);
    getchar();
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings, size, stdin);
    int i = 0, count = 0;
    while (strings[i] != '\0')
    {
        if (strings[i] == ' ')
        {
            count++;
            i++;
            continue;
        }
        i++;
    }
    count++;
    printf("COUNT OF WORDS IN THE SENTENCE: %d", count);
    return 0;
}