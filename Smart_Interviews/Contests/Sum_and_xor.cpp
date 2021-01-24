#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        int count = 0;
        while(n) {
            if((n & 1) == 0) count++;
            n = n >> 1;
        }
        cout << (1L << count) - 1 << endl;
    }

    return 0;
}