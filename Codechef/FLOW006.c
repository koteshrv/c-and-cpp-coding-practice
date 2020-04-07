#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    int sum=0;
	    while(x!=0){
	        sum+=x%10;
	        x/=10;
	    }
	    printf("%d\n",sum);
	    
	}
	return 0;
}

