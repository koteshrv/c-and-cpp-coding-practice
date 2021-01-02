#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        int ar1[n], ar2[m];
        for(int i = 0; i < n; i++) cin >> ar1[i];
        for(int j = 0; j < m; j++) cin >> ar2[j];
        long long ar1_sum = accumulate(ar1, ar1 + n, 0);
        long long ar2_sum = accumulate(ar2, ar2 + m, 0);
        sort(ar1, ar1 + n);
        sort(ar2, ar2 + m);
        int ar1_pos = 0;
        int ar2_pos = m - 1;
        int swaps = 0;
        while(ar1_sum <= ar2_sum) {
            ar1_sum = ar1_sum - ar1[ar1_pos] + ar2[ar2_pos];
            ar2_sum = ar2_sum - ar2[ar2_pos] + ar1[ar1_pos];
            ar1_pos++;
            ar2_pos--;
            swaps++;
            if(ar1_pos > n - 1 || ar2_pos < 0) break;
        }
        cout << (ar1_sum > ar2_sum ? swaps : -1) << endl;
        
    }

    return 0;
}