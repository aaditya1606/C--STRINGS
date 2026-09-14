/*
PROGRAM: CHECK WHETHER A STRING IS PALINDROME OR NOT
LANGUAGE: C
AUHTOR- AADITYA SHAKYA
*/

#include <stdio.h>
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
    fgets(string,size,stdin);
    int palindromeflag=1;
    int length=strlen(string)-1;
    for(int i=0;i<length/2;i++){
        if(string[i]!=string[length-1-i]){
            palindromeflag=0;
            break;
        }
    }
    if(palindromeflag==0){
        printf("NOT PALINDROME!!");
    }
    else{
        printf("PALINDROME!!");
    }
    return 0;
}