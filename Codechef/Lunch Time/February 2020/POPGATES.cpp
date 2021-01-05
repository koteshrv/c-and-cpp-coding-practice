#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        int k,n;
        cin >> n >> k;
        char array[n];
        for(int i=0;i<n;i++){
            cin >> array[i];
        }
        int count=0,heads=0;
        for(int i=n-1;i>=0;i--){
            if(array[i]=='H'){
                n--;
                for(int j=n-1;j>=0;j--){
                    if(array[j]=='H')
                       array[j]=='T';
                    else
                        array[j]=='H';
                }
            }
            else
                n--;
            count++;
        if(count == k)
            break;
        }
        for(int i=0;i<n-k;i++){
            if(array[i]=='H')
                heads++;
        }
        cout << heads <<endl;
    }
	return 0;
}