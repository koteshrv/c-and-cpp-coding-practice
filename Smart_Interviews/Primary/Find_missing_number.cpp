#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int sum = 0, total = ((n + 1) * (n + 2)) / 2, a;
        for(int i = 0; i < n; i++)  {
            cin >> a;
            sum += a;
        }
        cout << total - sum << endl;
    }

    return 0;
}