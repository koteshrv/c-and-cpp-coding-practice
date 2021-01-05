#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long cubes = pow(n, 3);
        for(int i = 1; i < n; i++) cubes += 2 * pow(i, 3);
        cout << cubes << endl;
    }

    return 0;
}