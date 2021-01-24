#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int l, r;
        cin >> l >> r;
        int n = r - l + 1;
        cout << 2 * n - 1 << endl;
    }

    return 0;
}