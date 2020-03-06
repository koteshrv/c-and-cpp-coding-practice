#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main() {
	int t;
	cin >>t;
	while(t--){
        int n,m;
        cin >>n >>m;
        int f[n+1],p[n+1],min[m+1]={0},count[m+1]={0},minimum;
        for(int i=1;i<n+1;i++)
            cin >> f[i];
        for(int i=1;i<n+1;i++)
            cin >> p[i]; 
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(f[j]==i){
                    min[i]+=p[j];
                    count[i]++;
                }
            }
        }
        
          
        for(int i=1;i<m+1;i++){
            if(count[i]!=0){
                minimum=min[i];
                break;
            }
        }


        for(int i=1;i<m+1;i++){
            if(min[i]<minimum){
                if(count[i]!=0)
                    minimum=min[i];
            }
        }
        
        cout << minimum <<endl;
        
    }
	return 0;
}
