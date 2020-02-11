#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    // your code goes here
    int t;
    scanf("%d\n",&t);
    while(t--){
        int n,s=0;
        scanf("%d\n",&n);
        s=abs(sqrt(n));
        printf("%d\n",s); 
    }

	return 0;
}
