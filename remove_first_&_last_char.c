/*
PROGRAM: REMOVE THE FIRST AND THE LAST CHARACTER AND PRINT THE REMAINING STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

#include <string.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while(size<=2){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    getchar();
    char strings[size];
    printf("ENTER THE STRING: ");
    scanf("%s", strings);
    int length=strlen(strings);
    for(int i=1;i<length/2;i++){
        char temp;
        temp=strings[length-1-i];
        strings[length-1-i]=strings[i];
        strings[i]=temp;
    }
    for(int i=1;i<length-1;i++){
        printf("%c",strings[i]);
    }
    return 0;
}