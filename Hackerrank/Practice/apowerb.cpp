#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int power(int x, int y) { 
    unsigned long long int res = 1;
    x %= MOD;
    if(x == 0) return 0;
    while(y > 0) {
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
        unsigned long long int a, b;
        cin >> a >> b;
        unsigned long long int pow = power(a, b);
        cout << pow << endl;
    }

    return 0;
}