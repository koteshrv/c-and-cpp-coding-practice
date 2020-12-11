#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;
        if(b == 0)  cout << 1 << endl;
        else if(a == 0) cout << 0 << endl;
        else cout << ((a ^ b) % 10) << endl;
    }

    return 0;
}