#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    char s[1000];
	    gets(s);
	    int len=strlen(s),i=0,final_len=0;
	    while(i<len){
	        int l=0;
	        while(s[i]==s[++i]){
                l++;
	        }
	        int count=0;
	        while(l!=0){
	            count++;
	            l/=10;
	        }
	        final_len+=(count+2);
	    }

	if(final_len>len)
	    printf("NO\n");
	else
	    printf("YES\n");
	}
	return 0;
}
