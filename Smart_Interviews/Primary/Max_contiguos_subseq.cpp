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
        int max = 1, count = 1;
        for(int i = 1; i < n; i++) {
            if(ar[i] == ar[i - 1]) continue;
            if(ar[i] - 1 == ar[i - 1])  count++;
            else {
                if(count > max) max = count;
                count = 1;
            }
        }
        if(count > max) max = count;
        cout << max << endl;
    }
    return 0;
}