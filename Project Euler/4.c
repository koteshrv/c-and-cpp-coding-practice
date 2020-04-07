#include <stdio.h>

int rev(int num){
  int rev_num = 0;
      while(num > 0)
      {
          rev_num = rev_num*10 + num%10;
          num = num/10;
      }
      return rev_num;
}
  int main(){
    int i,j,k,ans=0;
    for(i=100;i<1000;i++){
      for(j=i;j<1000;j++){
        k=i*j;
        if(k==rev(k)){
          if(ans<k)
            ans=k;
        }
      }
    }
    printf("%d",ans);
    return 0;
  }
