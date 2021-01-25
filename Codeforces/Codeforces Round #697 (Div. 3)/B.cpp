#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int y = n % 2020;
        int x = n - (2021 * y);
        x /= 2020;
        if((x + y) * 2020 + y == n && x >= 0 && y >= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}