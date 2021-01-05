#include <iostream>
#include <cmath>

using namespace std;

int subset_sum(long long int arr[],int n,int m)
{
	int  count = pow(2,n),flag=0;
    long long int a[n];
	for (int i = 0; i < count; i++)
	{   int sum=0;
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
                sum+=arr[j];
		}
        if(sum==m)
            flag++;
	}
    return flag;
}


int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,m;
        cin >>n >>m;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }
        if(subset_sum(arr,n,m)>=1)
            cout <<"Yes" <<endl;
        else
            cout <<"No" <<endl;     
    }
}
