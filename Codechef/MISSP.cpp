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
        sort(ar, ar + n);
        for(int i = 0; i < n; i++) {
            if(ar[i] == ar[i + 1])  i++;
            else {
                cout << ar[i] << endl;
                break;
            }
        }
    }

    return 0;
}