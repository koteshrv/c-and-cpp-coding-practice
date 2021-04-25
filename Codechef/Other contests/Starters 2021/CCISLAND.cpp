#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        if(xr * d <= x && yr * d <= y) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}