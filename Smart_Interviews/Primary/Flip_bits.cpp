#include <bits/stdc++.h>
using namespace std;

int setBits(int n) {
    int count = 0;
    while(n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << setBits(a ^ b) << endl;
    }

    return 0;
}