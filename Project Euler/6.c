#include <stdio.h>
  int main(){
  int i=1;
  long int sq_sum=0,sum=0;
  while(i<=100){
  sq_sum+=(i*i);
  sum+=i;
  i++;
  }
  printf("%ld\n",sq_sum-(sum*sum));
  return 0;
  }
