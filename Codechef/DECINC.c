#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d\n",&x);
	if(x%4==0)
	    x++;
	else
	    x--;
	printf("%d\n",x);
	    
	return 0;
}

