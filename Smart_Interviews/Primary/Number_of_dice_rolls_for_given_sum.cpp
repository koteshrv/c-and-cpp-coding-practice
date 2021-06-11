#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int number_of_dice_rolls(int n, int dp[]) {
    if(n == 0) {
        return 1;
    }
    if(dp[n] != -1) {
        return dp[n] % mod;
    }
    int count = 0;
    for(int i = 1; i <= 6; i++) 
        if(n - i >= 0) count = ((count % mod) + (number_of_dice_rolls(n - i, dp) % mod)) % mod;
    dp[n] = count % mod;
    return dp[n];
}

int main() {
    int N = 100000;
    int dp[N + 1];
    memset(dp, -1, sizeof(dp));
    int k = number_of_dice_rolls(N, dp);
    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}