#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int k, count = 0;
        for(int i = 0; i < n; i++) {
            cin >> k;
            if(k & 1) count++;
        }
        cout << min(count, n - count) << endl;
    }

    return 0;
}