#include <stdio.h>

  int main(){
    char string[1000];
    printf("Enter the string:  "); 
    gets(string);
    for(int i=0;string[i]!='\0';i++){
    if(string[i]!=' ')
      printf("%c",string[i]);
    else
      printf("\n");
    }
    return 0;
  }
