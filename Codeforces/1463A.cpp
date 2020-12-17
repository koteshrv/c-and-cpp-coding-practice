#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum <= 6)    cout << "NO" << endl;
        else {
            sum %= 7;
            if(sum < 4 && sum > 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}