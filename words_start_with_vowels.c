/*
PROGRAM: COUNT HOW MANY WORDS START WITH A VOWEL IN THE SENTENCE
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
    int i = 0, count = 0;
    if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
    {
        count++;
        i++;
    }
    
    while (string[i] != '\0')
    {
        if (string[i] == ' ')
        {
            if (string[i + 1] == 'a' || string[i + 1] == 'A' || string[i + 1] == 'e' || string[i + 1] == 'E' || string[i + 1] == 'i' || string[i + 1] == 'I' || string[i + 1] == 'o' || string[i + 1] == 'O' || string[i + 1] == 'u' || string[i + 1] == 'U')
            {
                count++;
                i++;
            }
            else
            {
                i++;
                continue;
            }
        }
        else
        {
            i++;
            continue;
        }
    }
    printf("NUMBER OF WORDS STARTING WITH VOWELS: %d", count);
    return 0;
}