#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double n, k;
        cin >> n >> k;
        if( int(ceil(n/2) - ceil((n-k)/2)) % 2) cout << "NO" << endl;
        else cout << "YES" << endl;
        //cout << ( ) ? "YES" : "NO" << endl;
    }
    return 0;
}