#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        string s;
        getline(cin, s);
        while(s.size() == 0) getline(cin, s);
        stack<string> stk;
        string temp;
        for(int i = 0; i < int(s.size()); i++) {
            if(s[i] == ' ') {
                stk.push(temp);
                temp = "";
            }
            else temp += s[i];
        }
        stk.push(temp);
        while(!stk.empty()) {
            temp = stk.top();
            cout << temp << " ";
            stk.pop();
        }
        cout << endl;
    }

    return 0;
}