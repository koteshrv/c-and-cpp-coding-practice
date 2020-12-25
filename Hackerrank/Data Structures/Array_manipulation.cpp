#include <bits/stdc++.h>
using namespace std;

int main() {

    long n, m;
    cin >> n >> m;
    vector<long> ar(n + 1, 0);
    for(int i = 0; i < m; i++) {
        long p, q, k;
        cin >> p >> q >> k;
        ar[p] += k;
        if(q + 1 <= n) ar[q + 1] -= k;
    }

    long a = 0, max = 0;
    for(int i = 1; i <= n; i++) {
        a += ar[i];
        if(a > max) max = a;
    }
    cout << max << endl;

    return 0;
}