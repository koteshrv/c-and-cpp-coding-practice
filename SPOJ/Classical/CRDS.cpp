#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        long long tot_cards = n * (n + 1) + (((n - 1) * n) / 2);  
        cout << tot_cards % 1000007 << endl;
    }

    return 0;
}