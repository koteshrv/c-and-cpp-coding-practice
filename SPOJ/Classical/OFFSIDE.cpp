#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1) {
        int a, d;
        cin >> a >> d;
        if(a == 0 &&  d == 0) break;
        int b[a], c[d];
        for(int i = 0; i < a; i++) cin >> b[i];
        for(int i = 0; i < d; i++) cin >> c[i];
        sort(b, b + a);
        sort(c, c + d);
        int f = 0;
        for(int i = 0; i < a; i++) {
            if(b[i] < c[1]) {
                f = 1;
                break;
            }
        }
        if(f) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    

    return 0;
}