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
        long long sum = 0;
        for(int i = 0; i < n; i++) sum += (ar[i] * i) - (ar[i] * (n - i - 1));
        cout << sum << endl; 
    }

    return 0;
}