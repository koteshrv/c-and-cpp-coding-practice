#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k, d;
        cin >> n >> k >> d;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        long long sum = accumulate(ar, ar + n, 0);
        int contests = sum / k;
        cout << (contests < d ? contests : d) << endl;
    }

    return 0;
}