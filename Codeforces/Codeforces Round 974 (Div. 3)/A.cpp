#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int gold = 0, poor = 0;
        int a;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a >= k) gold += a;
            else if (a == 0){
                if(gold) {
                    gold--;
                    poor++;
                }
            }
        }
        cout << poor << endl;
    }
    return 0;
}