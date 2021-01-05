#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;
        a %= 10;
        if(b == 0)  cout << 1 << endl;
        else {
            if(a == 2 || a == 3 || a == 7 || a == 8)    {
                b %= 4;
                if(b == 0)  b = 4;
            }
            else if (a == 4 || a == 9)  {
                b %= 2;
                if(b == 0)  b = 2;
            }
            else b = 1;

            int ans = pow(a, b);
            ans %= 10;
            cout << ans << endl;
        }
        
    }

    return 0;
}