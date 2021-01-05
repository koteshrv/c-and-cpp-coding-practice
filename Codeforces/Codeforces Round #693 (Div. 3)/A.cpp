#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int count = 1;
        while(count < n) {
            if(w % 2 == 0) w /= 2;
            else if(h % 2 == 0) h /= 2;
            else break;
            count *= 2;
        }
        cout << (count >= n ? "YES" : "NO") << endl;
    }

    return 0;
}