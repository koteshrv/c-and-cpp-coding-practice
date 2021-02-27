#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        vector<int> vec(10);
        for(int i = 0; i < 10; i++) cin >> vec[i];
        int k, i;
        cin >> k;
        for(i = 9; i >= 0; i--) {
            if(vec[i] == 0) continue;
            if(k >= vec[i]) {
                vec[i] -= k;
                k -= vec[i];
            }
            else break;
        }
        cout << i + 1 << endl;
    }

    return 0;
}