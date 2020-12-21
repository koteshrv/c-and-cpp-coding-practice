#include <bits/stdc++.h>
using namespace std;

int check(string s) {
    int i = 0, flag = 0;
    while(s.size() > 0 && i < s.size() - 1) {
        if(s[i] != s[i + 1]) {
            s.erase(i, i + 1);
        }
        else i++;
    }
    if(s.size() == 2 && s[0] != s[1])   return 1;    
    return s.size() == 0 ? 1 : 0;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        string temp = s, t = s;
        int count = 0, flag = 0;
        if(check(s) == 1)   cout << 0 << endl;
        else {
            for(int i = 0; i < n - 1; i++) {
                if(temp[i] != temp[i + 1]) {
                    if(temp[i] == 1)    temp[i] = 0;
                    else temp[i] = 1;
                    count++;
                }    
                if(check(temp) == 1) {
                    cout << count << endl;
                    flag = 1;
                }
            }
            if(flag == 0)   cout << -1 << endl;
        }
    }

    return 0;
}