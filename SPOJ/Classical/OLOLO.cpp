#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    int ans = 0, n;
    while(t--) {
        cin >> n;
        ans ^= n;
    }
    cout << ans << endl;
    return 0;
}