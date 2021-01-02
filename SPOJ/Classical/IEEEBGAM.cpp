#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        double n;
        cin >> n;
        cout << fixed << setprecision(8) << n / (n + 1) << endl;
    }

    return 0;
}