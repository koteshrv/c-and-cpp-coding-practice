#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s, p;
        cin >> s >> p;
        string x = s, y = p;
        sort(s.begin(), s.end());
        sort(p.begin(), p.end());
        if(s != p)  cout << "No" << endl;
        else {
            int f = 1;
            for(int i = 0; i < n; i++) {
                if(y[i] != x[i]) {
                    if(x[i] == '0') {
                        f = 0;
                        break;
                    }
                    else {
                        int k = i + 1;
                        while(x[k] != '0') {
                            k++;
                        }
                        swap(x[i], x[k]);
                    }
                }
            }
            if(f) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}