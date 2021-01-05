#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n], ans[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        int pos = 0;
        for(int i = 0; i < n; i += 2, pos++)   ans[i] = ar[pos];
        pos = n - 1;
        for(int i =  1; i < n; i += 2, pos--)   ans[i] = ar[pos];
        for(int i = 0; i < n; i++)  cout << ans[i] << " ";
        cout << endl; 
    }

    return 0;
}