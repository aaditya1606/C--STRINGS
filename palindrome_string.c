#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int size;
    printf("ENTER THE SIZE OF THE STRING: ")
    scanf("%d", &size);
    while(size<=0){
        printf("ENTER A VALID SIZE!! RE-ENTER: ");
        scanf("%d", &size);
    }
    char string[size];
    print("ENTER THE STRING: ");
    fgets(string,size,stdin);
    int length=strlen(string);
    for(int i=0;i<=length/2;i++){
        bool palindromeflag=true;
        if(string[i]!=string[length-1-i]){
            palindromeflag=false;
            break;
        }
    }
    if(palindromeflag==true){
        printf("PALINDROME!!");
    }
    else{
        printf("NOT PALINDROME!!");
    }
    return 0;
}
