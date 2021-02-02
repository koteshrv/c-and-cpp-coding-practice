#include <bits/stdc++.h>
using namespace std;

int count(vector<int> ar, int n, int k) {
    int tot = 0, cnt = 1;
    for(int i = 0; i < n; i++) {
        tot += ar[i];
        if(tot > k) {
            tot = ar[i];
            cnt++;
        }
    }
    return cnt;
}

int partition(vector<int> ar, int n, int k) {
    int l = *max_element(ar.begin(), ar.end());
    int h = accumulate(ar.begin(), ar.end(), 0);
    while(l < h) {
        int m = l + (h - l) / 2;
        int cnt = count(ar, n, m);
        if(cnt <= k) h = m;
        else l = m + 1;
    }
    return l;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for(int i = 0; i < n; i++) cin >> ar[i];
        cout << partition(ar, n, k) << endl;
    }

    return 0;
}