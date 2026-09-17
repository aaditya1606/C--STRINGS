/*
PROGRAM: PRINT MIDDLE CHARACTER(S) OF THE STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while(size<=1){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    getchar();
    char string[size];
    printf("ENTER THE STRING: ");
    scanf("%s", string);
    int length=strlen(string);
    if(length%2==0){
        printf("%c",string[(length/2)]);
        printf("%c",string[(length/2)-1)];
    }
    else if(length%2==1){
        printf("%c",string[(length/2)]);
    }
}
