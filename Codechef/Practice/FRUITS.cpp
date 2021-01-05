#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,k;
        cin >> n >> m >> k;
        if(k>=abs(n-m)) cout << 0 << endl;
        else cout << abs(n-m)-k << endl;
    }
    return 0;
}