#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++)  cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int count = 0, j = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > b[j]) {
                count++;
                j++;
            }    
        }
        cout << count << endl;
    }

    return 0;
}