#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, investment = 0, returns = 0;
        cin >> n >> k;
        int p[n];
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            investment += p[i];
            if(p[i] > k)
                p[i] = k;
            returns += p[i];
        }

        cout << investment - returns << "\n";
    }

    return 0;
}

