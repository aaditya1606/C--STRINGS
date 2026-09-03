/*
PROGRAM: COUNT HOW MANY ALPHABETS ARE BEFORE 'm' AND AFTER 'm' IN THE GIVEN STRING
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
    int i = 0, after = 0, before = 0;
    while (string[i] != '\0')
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            if(string[i]=='m'||string[i]=='M'){
                i++;
                continue;
            }
            if ((string[i]>='a' && string[i]<'m')||(string[i]>='A' && string[i]<'M'))
            {
                before++;
                i++;
            }
            else
            {
                after++;
                i++;
            }
        }
        else{
            i++;
            continue;
        }
    }
    printf("ELEMENTS AFTER 'm': %d\n", after);
    printf("ELEMENTS BEFORE 'm': %d\n", before);
    return 0;
}