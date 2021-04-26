#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        string s1, s2;
        stack<char> st;
        cin >> s1;
        int len = s1.size();
        for(int i = 0; i < len; i++) {
            if(s1[i] == '(') continue;
            else if(s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/' || s1[i] == '%' || s1[i] == '^') st.push(s1[i]);
            else if(s1[i] == ')') {
                s2 += st.top();
                st.pop();
            }
            else s2 += s1[i];
        }
        cout << s2 << endl;
    }

    return 0;
}