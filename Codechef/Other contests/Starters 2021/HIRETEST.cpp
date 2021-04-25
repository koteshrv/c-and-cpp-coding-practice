#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, prob;
        cin >> n >> prob;
        int x, y;
        cin >> x >> y;
        vector<string> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
            for(int j = 0; j < n; j++) {
                int f = 0, p = 0, ns = 0;
                for(int i = 0; i < prob; i++) {
                    if(v[j][i] == 'F') f++;
                    else if(v[j][i] == 'P') p++;
                    else ns++;
            }
            if((f >= x )|| ((f == x - 1) && (p >= y))) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }

    return 0;
}