#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    if(b == 1)  return 1;
    return a * power(a, b - 1);
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        long long pow = power(a, b);
        cout << pow << endl;
    }

    return 0;
}