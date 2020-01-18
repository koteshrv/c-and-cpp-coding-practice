#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
    int t;
    cin >>t;
    while(t--){
       int n,min,diff;
       cin >>n;
       long int s[n];
       for(int i=0;i<n;i++){
           cin >>s[i];
       }
       sort(s,s+n);
       	min=s[1]-s[0];
	    for(int i=1;i<=n-2;++i){
            diff=s[i+1]-s[i];
	        if(diff<min)
	            min=diff;
	}
       cout <<min <<endl;

    }

}
