#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << ((n & 0b10101010101010101010101010101010) >> 1 | (n & 0b01010101010101010101010101010101) << 1) << endl;
    }

    return 0;
}