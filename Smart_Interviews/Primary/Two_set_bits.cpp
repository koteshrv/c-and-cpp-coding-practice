#include <bits/stdc++.h>
using namespace std;

void findN(long long n) {
    long long l = 1, last_number = 0;
    while(l * (l + 1) / 2 < n) last_number += l++;
    long long r = n - last_number - 1;
    cout << ((1 << l) + (1 << r)) % 1000000007 << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        findN(n);
    }

    return 0;
}