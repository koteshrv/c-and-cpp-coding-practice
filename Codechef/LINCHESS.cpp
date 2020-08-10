#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int p[n], min = INT_MAX;
        for(int i = 0; i < n; i++)  cin >> p[i];
        for(int i = 0; i < n; i++) {
            if(k % p[i] == 0) {
                if(k / p[i] < min)  min = p[i];
            }
        }
        if(min != INT_MAX)  cout << min << endl;
        else    cout << -1 << endl;     
    }
    return 0;
}