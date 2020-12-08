#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        unsigned long long int a, b;
        cin >> a >> b;
        unsigned long long int even[2], odd[2];
        a % 2 == 0 ? (even[0] = a / 2, odd[0] = a / 2) : (even[0] = a / 2, odd[0] = a / 2 + 1);
        b % 2 == 0 ? (even[1] = b / 2, odd[1] = b / 2) : (even[1] = b / 2, odd[1] = b / 2 + 1);
        cout << (unsigned long long int)(odd[0] * odd[1]) + (even[0] * even[1]) << endl;
    }
    return 0;
}