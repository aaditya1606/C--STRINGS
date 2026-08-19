/*
PROGRAM: PRINT THE FIRST AND THE LAST CHARACTER OF THE STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while(size<=2){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    char string[size];
    printf("ENTER THE STRING: ");
    scanf("%s", &string);
    char first=string[0];
    char last=string[1];
    int i=1;
    while(string[i]!='\0'){
        last=string[i];
        i++;
    }
    printf("\nFIRST CHARACTER OF THE STRING: %c\n",first);
    printf("LAST CHARACTER OF THE STRING: %c\n",last);
    return 0;
}