#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s, str;
        cin >> s;
        str = s;
        reverse(s.begin(), s.end());
        if(s == str) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}