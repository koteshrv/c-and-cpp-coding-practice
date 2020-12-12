#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b) {
    if(b == 0)  return a;
    return gcd(b, a % b);
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        long long lcm = (a / gcd(a, b)) * b;
        cout << lcm << " " << gcd(a, b) << endl;
    }

    return 0;
}