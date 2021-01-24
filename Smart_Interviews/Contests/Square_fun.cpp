#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;
        a = ceil(sqrt(a));
        b = floor(sqrt(b));
        cout << b - a + 1 << endl;
    }

    return 0;
}