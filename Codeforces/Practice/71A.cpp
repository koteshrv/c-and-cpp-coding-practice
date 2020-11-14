#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s,st;
        cin >> s;
        int len = s.size();
        if(len<=10)    cout << s << endl;
        else {
            st+=s[0];
            st+=to_string(len-2);
            st+=s[len-1];
            cout << st << endl;
        }
    }    
    return 0;
}