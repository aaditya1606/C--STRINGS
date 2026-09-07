/*
PROGRAM: REVERSE THE STRING WITHOUT USING ANY BUILT-IN FUNCTION
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>
#include <string.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ");
    scanf("%d", &size);
    while(size<=0){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    getchar();
    char string[size];
    printf("ENTER THE STRING: ");
    fgets(string,size,stdin);
    int length=strlen(string);
    for(int i=0;i<=length/2;i++){
        int temp;
        temp=string[length-1-i];
        string[length-1-i]=string[i];
        string[i]=temp;
    }
    puts(string);
    return 0;
}