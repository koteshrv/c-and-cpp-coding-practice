#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long a, temp = 0, ans = 0, flag = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            temp += a;
            if(temp == 0) flag = 1;
            ans = min(ans, temp);
        }
        if(ans == 0 && flag == 1) ans = 1;
        else if(ans < 0) ans = -1 * ans + 1;
        cout << ans << endl; 
    }

    return 0;
}