#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n), e(n), sum_v(n, 0), sum_e(n, 0), visited(n, 0);
        cin >> v[0];
        sum_v[0] = v[0];
        for(int i = 1; i < n; i++) {
            cin >> v[i];
            sum_v[i] = sum_v[i - 1] + v[i];
        }
        cin >> e[0];
        sum_e[0] = e[0];
        for(int i = 1; i < n; i++) {
            cin >> e[i];
            sum_e[i] = sum_e[i - 1] + e[i];
        }
        int dragon_energy = accumulate(v.begin(), v.end(), 0);
        int energy = accumulate(e.begin(), e.end(), 0);
        if(dragon_energy > energy) cout << -1 << endl;
        else {
            int rev = 0;
            for(int i = 0; i < n; i++) {
                if(sum_v[i] > sum_e[i]) {
                    rev = 1;
                    break;
                }
            }
            if(rev) {
                reverse(e.begin(), e.end());
                reverse(v.begin(), v.end());
            }
            int power = e[0] - v[0], lost = 0;
        
            for(int i = 1; i < n; i++) {
                if(power < 0) {
                    lost = 1;
                    break;
                }
                power += (e[i] - v[i]);
            }
            if(!lost) {
                if(rev) cout << n << endl;
                else cout << 1 << endl;
            }
            else cout << -1 << endl;
        }
    }

    return 0;
}