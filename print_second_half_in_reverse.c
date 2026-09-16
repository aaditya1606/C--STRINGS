/*
PROGRAM: PRINT THE SECOND HALF OF STRING IN REVERSE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
  scanf("%s", strings);
  int length=strlen(strings)-1;
  for(int i=length-1;i>=length/2;i--){
    printf("%c",strings[i]);
  }
  return 0;
  
}
