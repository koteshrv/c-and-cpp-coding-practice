#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        double count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') count++; 
        }
        count += 120 - n;
        //cout << (count / 120) * 100 << endl;
        if((count / 120) * 100 >= 75)   cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}