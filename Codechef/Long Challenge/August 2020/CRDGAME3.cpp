#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int c, r;
        float digitsR, digitsC;
        cin >> c >> r;
        if(r < 10 && c < 10)    cout << 1 << " " << 1 << endl;
        else {
            digitsR = float(r) / float(9);
            digitsC = float(c) / float(9);
            if(digitsR > (r / 9))   digitsR = (r / 9) + 1;
            if(digitsC > (c / 9))   digitsC = (c / 9) + 1;
            if(digitsR <= digitsC)  cout << 1 << " " << digitsR << endl;
            else    cout << 0 << " " << digitsC << endl;
        }
    }
    return 0;
}