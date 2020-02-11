#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    long int x;
	    scanf("%ld\n",&x);
	    int sum=0;
	    sum+=x%10;
	    while(x>=10){
	        x/=10;
	    }
	    sum+=x;
	    printf("%d\n",sum);
	}
	return 0;
}

