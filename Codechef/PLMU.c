#include<stdio.h>
    int main(){
        int t;
        scanf("%d\n",&t);
        while(t--){
            int n,count1=0,count2=0;
            scanf("%d\n",&n);
            while(n--){
            int a;
            scanf("%d ",&a);
            if(a==0)
                count1++;
            if(a==2)
                count2++;
            }
            printf("%d\n",(count1*(count1-1))/2  +  (count2*(count2-1))/2);
        }
        
        return 0;
    }