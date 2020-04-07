#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        long long int n,sum=0;
        cin >>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
	    for(int j=0;j<n;j++){
            cin>> b[j];
        }
        int n1=sizeof(a)/sizeof(a[0]); 
        sort(a,a+n1);
        int n2=sizeof(b)/sizeof(b[0]); 
        sort(b,b+n2);
        for(int i=0;i<n;i++){
            if(a[i]>b[i])
                sum+=b[i];
            else
                sum+=a[i];
        }
        cout <<sum <<endl;
    }
	return 0;
}