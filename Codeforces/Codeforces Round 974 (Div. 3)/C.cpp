#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long s = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            s += arr[i];
        }
        sort(arr.begin(), arr.end());
        int m = arr[n/2];
        if(n < 3) cout << (m*2*n+1-s) << endl;
        else cout << -1 << endl;
        
    }
    return 0;
}