#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if((x%5==0) && (x+0.5<y))
	    printf("%.2f\n",y-x-0.5);
	else
	    printf("%.2f\n",y);
	return 0;
}

