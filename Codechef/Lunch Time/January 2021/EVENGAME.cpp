#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int k;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> k;
            sum += k;
        }
        if(sum & 1) cout << 2 << endl;
        else cout << 1 << endl;
    }

    return 0;
}