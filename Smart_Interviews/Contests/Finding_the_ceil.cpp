#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    sort(ar, ar + n);
    int queries;
    cin >> queries;
    for(int i = 0; i < queries; i++) {
        int k;
        cin >> k;
        int upper = lower_bound(ar, ar + n, k) - ar;
        if(upper == n) cout << INT_MAX << endl;
        else cout << ar[upper] << endl;  
    }
    
    return 0;
}