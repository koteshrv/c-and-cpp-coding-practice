#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int a,b;
	    scanf("%lld %lld",&a,&b);
	    if(a>b)
	        printf(">\n");
	    else if(a<b)
	        printf("<\n");
	    else
	        printf("=\n");
	}
	return 0;
}

