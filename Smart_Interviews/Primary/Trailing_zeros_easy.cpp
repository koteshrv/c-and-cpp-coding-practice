#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long int n;
        cin >> n;
        long long zeros = 0;
        while(n > 0) {
            zeros += n / 5;
            n /= 5;
        }
        cout << zeros << endl;
    }

    return 0;
}