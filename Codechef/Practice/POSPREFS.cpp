#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int ar[n];
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)  ar[i] = i + 1;
            else ar[i] = -i - 1;
        }
        int pos = n / 2 + n % 2;
        int neg = n / 2;
        
        if(pos > k) {
            for(int i = n - 1; i >= 0; i--) {
                if(pos == k)    break;
                if(ar[i] > 0) {
                    ar[i] = -ar[i];
                    pos--;
                }
            }
        }

        else {
            for(int i = n - 1; i >= 0; i--) {
                if(pos == k)    break;
                if(ar[i] < 0) {
                    ar[i] = -ar[i];
                    pos++;
                }
            }
        }

        for(int i = 0; i < n; i++)  cout << ar[i] << " ";
        cout << endl;
    }
    return 0;
}