#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, m, d;
        cin >> n >> m >> d;
        int a, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            ans += a / d;
            if(a % d == 0) ans--;
        }
        if(ans >= m)    cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}