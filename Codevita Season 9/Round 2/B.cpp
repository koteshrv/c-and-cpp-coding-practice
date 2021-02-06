#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int ar[n], sum[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    int p;
    cin >> p;
    int pairs[p][2];
    for(int i = 0; i < p; i++) cin >> pairs[i][0] >> pairs[i][1];
    partial_sum(ar, ar + n, sum);
    int members = INT_MAX, pair, m, sum_max = INT_MIN;
    for(int i = 0; i < p; i++) {
        int l = pairs[i][0] - 1, r = pairs[i][1] - 1, s;
        if(l == 0) s = sum[r];
        else s = sum[r] - sum[l - 1];
        m = r - l + 1;
        if(s > sum[n - 1] - s && m < members && s > sum_max) {
            m = members;
            pair = i;
            sum_max = s;
        }
    }
    for(int i = pairs[pair][0]; i <= pairs[pair][1]; i++) cout << i << " "; cout << endl;

    return 0;
}