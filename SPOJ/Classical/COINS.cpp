#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int coins = floor(n/4) + floor(n/3) + floor(n/2);
        cout << (coins > n ? coins : n) << endl;
    }

    return 0;
}