#include <bits/stdc++.h>
using namespace std;

int count_quadrapiles(int a[], int b[], int c[], int d[], int n) {
    int cnt = 0;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            v1.push_back(a[i] ^ b[j]);
            v2.push_back(0 ^ c[i] ^ d[j]);
        }
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i < int(v2.size()); i++) {
        auto l = lower_bound(v1.begin(), v1.end(), v2[i]);
        auto h = upper_bound(v1.begin(), v1.end(), v2[i]);
        cnt += h - l;
    }
    return cnt;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n], c[n], d[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];
        for(int i = 0; i < n; i++) cin >> d[i];
        cout << count_quadrapiles(a, b, c, d, n) << endl;
    }

    return 0;
}