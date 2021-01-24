#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(1000001, true);
int cnt[1000001];

void primes() {
    for(int i = 2; i * i <= 1000000; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1000000; j += i) prime[j] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    primes();
    for(int i = 4; i <= 1000002; i++) {
        if(prime[i] && prime[i - 2])  cnt[i] = cnt[i - 1] + 1;
        else cnt[i] = cnt[i - 1];
    }

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << cnt[n] << endl;
    }

    return 0;
}