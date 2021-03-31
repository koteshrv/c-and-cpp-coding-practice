#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int ar[n];
    cin >> ar[0];
    vector<long long> subar_sum(n);
    subar_sum[0] = ar[0];

    for(int i = 1; i < n; i++) {
        cin >> ar[i];
        subar_sum[i] = ar[i] + subar_sum[i - 1];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if(l == 0) cout << subar_sum[r] << endl;
        else cout << subar_sum[r] - subar_sum[l - 1] << endl;
    }

    return 0;
}