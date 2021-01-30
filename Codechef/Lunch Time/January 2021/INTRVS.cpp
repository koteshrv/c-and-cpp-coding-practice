#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int s, count = 0, too_slow = 0, bot = 0, accepted = 0, count_1 = 0;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s == -1) count++;
            if(s > k) too_slow = 1;
            if(s == 1 || s == 0) count_1++;
        }
        /*if(n - count < (ceil(n / 2)))*/ cout << n - count << " " <<  ceil(n / 2) << endl;
        if(1) int a = 1;
        else if(too_slow) cout << "Too Slow" << endl;
        else if(count_1 == n) cout << "Bot" << endl;
        else cout << "Accepted" << endl;
    }

    return 0;
}