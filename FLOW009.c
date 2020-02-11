#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long int quantity,price;
	    scanf("%ld %ld",&quantity,&price);
	    double totAmount=0.0;
	    totAmount=quantity*price;
	    if(quantity>1000)
	        totAmount-=totAmount/10;
	    printf("%lf\n",totAmount);
	}
	return 0;
}

