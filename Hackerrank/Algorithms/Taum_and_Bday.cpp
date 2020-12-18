#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long b, w;
        cin >> b >> w;
        long long bc, wc, z;
        cin >> bc >> wc >> z;
        long long min_cost = (b * min(bc, wc + z)) + (w * min(wc, bc + z));
        cout << min_cost << endl;
    }

    return 0;
}