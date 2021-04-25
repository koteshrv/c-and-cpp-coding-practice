#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        long long n, m;
        cin >> n >> m;
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        long long th = n + m - x - y;
        long long p = max(n - a, m - b);
        if(th <= p) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}