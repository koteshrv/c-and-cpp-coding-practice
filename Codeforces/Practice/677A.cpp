#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,w=0,k;
    cin >> n >> h;
    for(int i=0;i<n;i++) {
        cin >> k;
        if(k>h) w+=2;
        else w++;
    }
    cout << w;
}