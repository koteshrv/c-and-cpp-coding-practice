#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        if(abs(x - y) % 2 == 1) cout << "No" << endl;
        else {
            if(abs(x - y) / 2 == k) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}