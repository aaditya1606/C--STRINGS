#include <stdio.h>

int main(){
  int size;
  printf("ENTER THE SIZE OF THE STRING: ");
  scanf("%d", &size);
  while(size<0){
    printf("ENTER A VALID SIZE!! RE-ENTER: ");
    scanf("%d", &size);
  }
  char string[size];
  printf("ENTER THE STRING: ");
  fgets(string,size,stdin);
  if(string[0]=='\0'){
    printf("EMPTY STRING");
  }
  else{
    printf("NOT AN EMPTY STRING");
  }
  return 0;
}
