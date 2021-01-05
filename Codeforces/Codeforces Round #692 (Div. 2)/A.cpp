#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == ')') count++;
            else count = 0;
        }
        if(n - count < count)   cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}