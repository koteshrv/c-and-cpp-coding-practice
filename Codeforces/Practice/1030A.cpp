#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++) cin >>ar[i];
    for(int i=0;i<n;i++){
        if(ar[i]==1)    {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}