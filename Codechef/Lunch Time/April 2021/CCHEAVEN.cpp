#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        double l;
        cin >> l;
        char c;
        double good_count = 0, heaven = 0;
        for(int i = 0; i < l; i++) {
            cin >> c;
            if(c == '1') good_count++;
            if((good_count / (i + 1)) >= 0.5) heaven = 1;
        }
        cout << (heaven ? "YES" : "NO") << endl;
    }

    return 0;
}