#include <bits/stdc++.h>
using namespace std;

void pairs(int a[], int n) {
    int count = 0;
    int maxi = a[n - 1];
    vector<int> Hash(maxi + 1, 0);
    for(int i = 0; i < n; i++)  Hash[a[i]] = 1; // Since all elements are distinct
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            if(a[i] + a[j] <= maxi) count += Hash[a[i] + a[j]];
        }
    }

    count = (count != 0) ? count : -1;
    cout << count << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        sort(a, a + n);
        pairs(a, n);
    }
    return 0;
}