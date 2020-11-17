#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++) cin >>ar[i];
    int grp=0;
    for(int i=1;i<n;i++){
        if(ar[i]!=ar[i-1])  grp++;  
    }
    cout << grp+1;
    return 0;
}