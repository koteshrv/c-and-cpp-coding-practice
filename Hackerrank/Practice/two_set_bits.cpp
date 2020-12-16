#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        unsigned long long n;
        cin >> n;
        unsigned long long bit_left = 1, last_num = 0;
        while((bit_left * (bit_left + 1)) / 2 < n) {
            last_num += bit_left;
            bit_left++;
        }
        unsigned long long bit_right = n - last_num - 1;
        unsigned long long ans = (1 << bit_left) | (1 << bit_right);
        cout << ans % 1000000007 << endl;
    }

    return 0;
}