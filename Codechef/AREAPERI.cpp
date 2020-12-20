#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    //cin >> t;

    while(t--) {
        int l, b;
        cin >> l;
        cin >> b;
        if(l * b > (2 * (l + b))) cout << "Area\n" << l * b << endl;
        else if(l * b < (2 * (l + b)))    cout << "Peri\n" << (2 * (l + b)) << endl;
        else cout << "Eq\n" << l * b << endl;
    }

    return 0;
}