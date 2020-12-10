#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        while(a % 10 == 0)  a/= 10;
        while(b % 10 == 0)  b/= 10;
        int sum = rev(a) + rev(b);
        cout << rev(sum) << endl;
    }
    return 0;
}