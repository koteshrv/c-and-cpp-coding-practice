#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int ar[26] = {0}, f = 0;
        for(int i = 0; i < int(s.size()); i++) ar[s[i] - 'a']++;
        for(int i = 0; i < int(s.size()); i++) {
            if(ar[s[i] - 'a'] > 1) {
                cout << s[i] << endl;
                f = 1;
                break;
            }
        }
        if(f == 0) cout << '.' << endl;
    }

    return 0;
}