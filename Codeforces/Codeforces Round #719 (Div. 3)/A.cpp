#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << "=" << x << endl

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ar[26] = {0};
        char prev = str[0];
        ar[str[0] - 'A'] = 1;
        int f = 0;
        for(int i = 1; i < int(str.size()); i++) {
            if(prev == str[i]) continue;
            if(ar[str[i] - 'A'] == 0) {
                ar[str[i] - 'A']++;
                prev = str[i];
            }
            else f = 1;
        }
        cout << (f ? "NO" : "YES") << endl;
    }

    return 0;
}