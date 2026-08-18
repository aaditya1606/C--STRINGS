/*
PROGRAM: TAKE A STRING INPUT AND PRINT ITS LENGTH
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main(){
    char string[100000];
    printf("ENTER THE STRING: ");
    gets(string);
    int i=0,count=0;
    while(string[i]!='\0'){
        i++;
        count++;
    }
    printf("LENGTH OF THE STRING: %d", count);
    return 0;
}