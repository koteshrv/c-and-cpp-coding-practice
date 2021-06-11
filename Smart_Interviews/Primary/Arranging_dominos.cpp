#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int main() {
    int N = 1000000;
    int dp[N + 1];
    for(int i = 0; i < 5; i++) dp[i] = 1;
    for(int i = 5; i < N + 1; i++) dp[i] = ((dp[i - 1] % mod) + (dp[i - 5] % mod)) % mod;

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] % mod << endl;
    }

    return 0;
}