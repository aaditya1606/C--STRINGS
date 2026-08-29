/*
PROGRAM: COUNT HOW MANY VOWELS AND CONSONANTS ARE THERE IN THE GIVEN STRING
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
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings, size, stdin);
    int i = 0;
    int vowels = 0, consonants = 0;
    while (strings[i] != '\0')
    {
        if(strings[i]==' '){
            i++;
            continue;
        }
        if ((strings[i] >= 65 && strings[i] <= 90) || (strings[i] >= 97 && strings[i] <= 122))
        {
            if (strings[i] == 'a' || strings[i] == 'e' || strings[i] == 'i' || strings[i] == 'o' || strings[i] == 'u' || strings[i] == 'A' || strings[i] == 'E' || strings[i] == 'I' || strings[i] == 'O' || strings[i] == 'U')
            {
                vowels++;
                i++;
            }
            else
            {
                consonants++;
                i++;
            }
        }
        else
        {
            i++;
            continue;
        }
    }
    printf("NUMBER OF VOWELS: %d\n", vowels);
    printf("NUMBER OF CONSONANTS: %d\n", consonants);
    return 0;
}