#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for(int j = 1; j <= t; j++) {
        int n;
        cin >> n;
        long long a, temp = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            temp += a;
            ans = min(ans, temp);
        }
        if(ans == 0) ans = 1;
        else if(ans < 0) ans = -1 * ans + 1;
        cout << "Scenario #" << j << ": " << ans << endl; 
    }

    return 0;
}