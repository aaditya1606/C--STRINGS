/*
PROGRAM: CONVERT ALL CHARACTERS OF A STRING TO UPPER CASE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    getchar();
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings,size,stdin);
    int i=0;
    while(strings[i]!='\0'){
        if(strings[i]>=97 && strings[i]<=122){
            strings[i]=strings[i]-32;
            i++;
        }
        else{
            i++;
            continue;
        }
    }
    puts(strings);
    return 0;
}