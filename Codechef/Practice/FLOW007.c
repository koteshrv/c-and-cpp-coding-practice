#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int N,rem,rev=0;
	    scanf("%d",&N);
	    while(N>0){
	        rem=N%10;
	        rev=rev*10+rem;
	        N=N/10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}

