#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,cost=0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
        cost+=k*i;
    }
    if(n>=cost) cout << 0;
    else cout << cost-n;
}