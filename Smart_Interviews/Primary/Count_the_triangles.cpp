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
        int count = 0;
        for(int i = 0; i < n - 2; i++) {
            int fixed = i + 2;
            for(int j = i + 1; j < n; j++) {
                while(fixed < n && ar[i] + ar[j] > ar[fixed]) fixed++;
                if(fixed > j) count += fixed - j - 1;  
            }
        }
        cout << count << endl;
    }

    return 0;
}