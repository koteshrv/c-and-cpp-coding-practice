#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int len = s.size(), upper = 0, sp_char = 0, num = 0, lower = 0;
        if(len >= 10) {
            if((s[0] >= 'a' && s[0] <= 'z') || (s[len - 1] >= 'a' && s[len - 1] <= 'z')) lower = 1;
                for(int i = 1; i < len - 1; i++) {
                    if(s[i] >= 'A' && s[i] <= 'Z') upper = 1;
                    else if(s[i] >= '0' && s[i] <= '9') num = 1;
                    else if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?') sp_char = 1;
                    else if(s[i] >= 'a' && s[i] <= 'z') lower = 1;
                }
                if(upper == 1 && num == 1 && sp_char == 1 && lower == 1) cout << "YES" << endl;
                else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}