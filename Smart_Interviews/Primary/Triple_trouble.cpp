#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        sort(ar, ar + n);
        int f = 0;
        for(int i = 0; i < n - 2; ) {
            if(ar[i] == ar[i + 1] && ar[i] == ar[i + 2])    i += 3;
            else {
                cout << ar[i] << endl;
                f = 1;
                break;
            }
        }
        if(f == 0)   cout << ar[n - 1] << endl;
    }

    return 0;
}