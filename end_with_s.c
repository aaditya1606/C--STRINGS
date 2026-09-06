/*
PROGRAM: COUNT HOW MANY WORDS END WITH 'S'
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
    int i = 0;
    int count = 0;
    while (string[i] != '\0'){
        if(string[i-1]=='s'||string[i-1]=='S'){
            count++;
        }
        i++;
    }
    if(string[i-1]=='s'||string[i-1]=='S'){
        count++;
    }
    printf("NUMBER OF WORDS: %d",count);
    return 0;
}