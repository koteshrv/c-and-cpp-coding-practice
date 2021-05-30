#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        int lang1 = 0, lang2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> s;
            int len = s.size(), l1 = 0, l2 = 0;
            for(int j = 0; j < len; j++) {
                if(s[j] >= 'a' && s[j] <= 'm') l1++;
                else if(s[j] >= 'N' && s[j] <= 'Z') l2++;
            }
            if(l1 == len) lang1++;
            else if(l2 == len) lang2++;
        }
        cout << ((lang1 + lang2 == n) ? "YES" : "NO") << endl;
    }

    return 0;
}