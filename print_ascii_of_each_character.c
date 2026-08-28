/*
PROGRAM: PRINT THE ASCII VALUE OF EACH CHARACTER IN A STRING
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/

#include <stdio.h>

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
    int i=0;
    while(string[i]!='\0'){
        if(string[i]==' '){
            i++;
            continue;
        }
        printf("ASCII Value of %c: %d\n",string[i],string[i]);
        i++;
    }
    return 0;
}