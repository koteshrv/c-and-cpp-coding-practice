#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, w, wr, k;
        cin >> n >> w >> wr;
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            cin >> k;
            m[k]++;
        }
        if(w <= wr) cout << "YES" << endl;
        else {
            long long present_weight = wr, satisfied = 0;
            for(auto i = m.begin(); i != m.end(); i++) {
                present_weight += ((i->second / 2) * i->first * 2);
                if(present_weight >= w) {
                    satisfied = 1;
                    break;
                }
            }
            cout << (satisfied ? "YES" : "NO") << endl;
        }

    }

    return 0;
}