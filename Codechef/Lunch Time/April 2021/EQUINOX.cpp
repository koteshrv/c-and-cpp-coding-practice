#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        int sarthak = 0, anuradha = 0;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s[0] == 'E' || s[i] == 'Q' ||  s[i] == 'U' || s[i] == 'I' || s[i] == 'N' || s[i] == 'O' || s[i] == 'X')  sarthak++;
            else anuradha++;
        }
        if(sarthak > anuradha) cout << "SARTHAK" << endl;
        else if(sarthak < anuradha) cout << "ANURADHA" << endl;
        else cout << "DRAW" << endl; 
    }

    return 0;
}