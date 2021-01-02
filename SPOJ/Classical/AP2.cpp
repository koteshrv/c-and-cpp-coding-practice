#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long b, c, sum;
        cin >> b >> c >> sum;
        long long n = (2 * sum) / (b + c);
        long long d = (c - b) / (n - 5);
        long long a = b - 2 * d;
        cout << n << endl;
        for(int i = 0; i < n; i++) cout << (a + (i * d)) << " ";
        cout << endl;
    }

    return 0;
}