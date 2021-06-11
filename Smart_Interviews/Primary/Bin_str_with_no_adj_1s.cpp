#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int main() {
    int N = 100000;
    int dp0[N + 1], dp1[N + 1];
    dp0[1] = dp1[1] = 1;
    for(int i = 2; i < N + 1; i++) {
        dp0[i] = ((dp0[i - 1] % mod) + (dp1[i - 1] % mod)) % mod;
        dp1[i] = dp0[i - 1] % mod;
    }
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << (dp0[n] + dp1[n]) % mod << endl;
    }

    return 0;
}