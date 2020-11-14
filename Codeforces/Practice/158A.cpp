#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n],sum=0,o=0,zero=1;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum==0)  cout << 0;
    else {
        int i = 1;
        if(a[k-1]==0){
            while(a[k-1-i]==0)  {
                i++;
                zero++;
            }
            //cout << zero <<endl;
            cout << k-zero;
        }
        else {
            if(k==n) cout << k;
            else {
                while(a[k+i-1]==a[k-1]) {
                    i++;
                    o++;
                }
                //cout << o << endl;
                cout << k+o;
            }   
        }
    }
    return 0;
}