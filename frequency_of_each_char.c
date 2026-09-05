/*
PROGRAM: FIND THE FREQUENCY OF EACH CHARACTER IN A STRING
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
    char strings[size];
    printf("ENTER THE STRING: ");
    fgets(strings,size,stdin);
    for (int i=0;strings[i]!='\n';i++){
        if(strings[i]==' '){
            continue;
        }
        int count=1;
        int next_step=0;
        for(int j=i+1;strings[j]!='\n';j++){
            if(strings[i]==strings[j]){
                next_step=1;
                break;
            }
        }
        if(next_step==1){
            continue;
        }
        else{
            for(int k=i-1;k>=0;k--){
                if(strings[i]==strings[k]){
                    count++;
                }
            }
        }
        printf("Frequency of %c: %d\n",strings[i],count);
    }
}