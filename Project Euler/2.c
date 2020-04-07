#include <stdio.h>
  int main(){
    long long int i=1,j=2,k=0,sum=0,even_sum=0;
    while(k<4000000){
      k=i+j;
      if(k%2==0)
        even_sum+=k;
      i=j;
      j=k;

    }
    printf("%lld",even_sum);
  }
