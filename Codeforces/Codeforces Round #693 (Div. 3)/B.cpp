#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a = 0, b = 0, temp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp == 1) a++;
            else b++;
        }
        int sum = a + (b * 2);
        if(sum & 1) cout << "NO" << endl;
        else {
            sum /= 2;
            while(sum > 0) {
                if(sum % 2 == 0) {
                    sum -= 2;
                    if(b != 0) b--;
                    else a -= 2;
                }
                else {
                    sum--;
                    a--;
                }
            }
            if(a >= 0 && b >= 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}