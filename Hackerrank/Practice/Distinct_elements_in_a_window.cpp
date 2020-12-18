#include <bits/stdc++.h>
using namespace std;

void count(int ar[], int n, int k) {
    map<int, int> hm;
    int cnt = 0;
    for(int i = 0; i < k; i++) {
        if(hm[ar[i]] == 0) cnt++;
        hm[ar[i]]++;
    }
    cout << cnt << " ";
    for(int i = k; i < n; i++) {
        if(hm[ar[i - k]] == 1) cnt--;
        hm[ar[i - k]]--;
        if(hm[ar[i]] == 0) cnt++;
        hm[ar[i]]++;
        cout << cnt << " ";
    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        count(ar, n, k);
    }

    return 0;
}