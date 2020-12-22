#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        int m = *max_element(ar, ar + n);
        int f[m + 1] = {0};
        for(int i = 0; i < n; i++)  f[ar[i]]++;
        for(int i = 0; i < n; i++) {
            if(f[i] == 2)   cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}   