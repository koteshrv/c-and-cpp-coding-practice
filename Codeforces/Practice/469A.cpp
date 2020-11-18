#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n+1]={0};
    int p;
    cin >> p;
    int P[p];
    for(int i=0;i<p;i++)    {
        cin >>P[i];
        ar[P[i]]++;
    }
    int q;
    cin >> q;
    int Q[q];
    for(int i=0;i<q;i++) {
        cin >> Q[i];
        ar[Q[i]]++;
    }   
    for(int i=1;i<=n;i++){
        if(ar[i]==0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";

    return 0;
}