#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        sort(ar, ar + n);
        int f = 0;
        for(int i = 0; i < n - 2; i++) {
            int l = i + 1;
            int r = n - 1;
            while(l < r) {
                if(ar[i] + ar[l] + ar[r] == k) {
                    f = 1;
                    break;
                }
                else if(ar[i] + ar[l] + ar[r] < k)  l++;
                else r--;
            }
        }
        if(f) cout << "true" << endl;
        else cout << "false" << endl;
    }

    return 0;
}