#include <stdio.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld\n",&t);
	while(t--){
	    long long int x;
	    scanf("%lld\n",&x);
	    int count=0;
	    while(x!=0){
	    int a=x%10;
	    if(a==4)
	        count++;
	    x/=10;
	    }
	printf("%d\n",count);
	}
	return 0;
}

