#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<string> s(n), str;
        for(int i = 0; i < n; i++)  cin >> s[i];
        for(int i = 0; i < k; i++) {
            int len;
            cin >> len;
            string temp;
            for(int j = 0; j < len; j++) {
                cin >> temp;
                str.push_back(temp);
            }
        }
        vector<string>::iterator it;

        int count = 0;
        
        for(int i = 0; i < n; i++) {
            it = find(str.begin(), str.end(), s[i]);
            if(it != str.end()) cout << "YES" << " ";
            else cout << "NO" << " ";
        }
        cout << endl;
    }

    return 0;
}