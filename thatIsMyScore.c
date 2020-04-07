#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int sum=0,n;
        scanf("%d",&n);
        int score[8]={};

        for(int i=0;i<n;i++)
        {
            int x=0,s=0;
            scanf("%d %d", &x,&s);
            x--;
            if(x<8)
            {
                int u = score[x];
                if (s>u)
                    score[x] = s;
	           
                else
                    score[x] = u;
		    }
        }

        for (int i=0;i<8;i++)
        {
            sum  += score[i];
        }

        printf("%d\n",sum);            
    }
    
    return 0;
}