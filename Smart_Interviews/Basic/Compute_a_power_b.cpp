#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;

ll power(ll x, ll y) { 
    ll res = 1;
    while(y) {
        if(y & 1)   res = (res * x) % MOD;
        y >>= 1;
        x = (x * x) % MOD;
    }
    return res;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;
        ll pow = power(a, b);
        cout << pow << endl;
    }

    return 0;
}