#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        long long int n,k,sum_of_rem=0;
        cin >>n >>k;
        long long int a[n],rem[n],sum_of_rem_arr[n];
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        for(int i=0;i<n;i++){
                rem[i]=a[i]%k;
            }
        for(int i=0;i<n;i++){
            sum_of_rem+=rem[i];
        }
        for(int i=0;i<n;i++){
            long long int a=sum_of_rem-rem[i];
            long long int b= k-rem[i];
            if(a>b && a-b>=k){
                long long int y=1,l,m;
                l=a-b;
                m=l/k;
                sum_of_rem_arr[i]=(l-(m*k));
            }
            else if(a==b)
                sum_of_rem_arr[i]=0;
            else if(a>b && a-b <k)
                sum_of_rem_arr[i]=a-b;
            else
                sum_of_rem_arr[i]=sum_of_rem;
        }
        
        int n1=sizeof(sum_of_rem_arr)/sizeof(sum_of_rem_arr[0]); 
        sort(sum_of_rem_arr,sum_of_rem_arr+n1);
        cout <<sum_of_rem_arr[0] <<endl;

    }
	return 0;
}