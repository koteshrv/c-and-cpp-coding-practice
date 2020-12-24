#include <bits/stdc++.h>
using namespace std;

int main() {

    int l;
    while(1) {
        cin >> l;
        if(l == 0) break;
        double ans = (l * l) / (2 * M_PI);
        cout << fixed << setprecision(2) << ans << endl;
    }

    return 0;
}