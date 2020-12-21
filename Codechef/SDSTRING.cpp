#include <bits/stdc++.h>
using namespace std;

int count(string s, char c) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == c) cnt++;
    }
    return cnt;
}
int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int z = count(s, '0');
        int o = count(s, '1');
        if(s.size() % 2 == 1 || z == 0 || o == 0)   cout << -1 << endl;
        else cout << abs(z - o) / 2 << endl;
    }

    return 0;
}