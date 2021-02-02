#include <bits/stdc++.h>
using namespace std;

string check(int n) {
    if(n == 1) return "Yes";
    for(int i = 2; i * i <= n; i++) {
        double val = log(n) / log(i);
        if(val - int(val) < 0.000000001) return "Yes";
    }
    return "No";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }

    return 0;
}