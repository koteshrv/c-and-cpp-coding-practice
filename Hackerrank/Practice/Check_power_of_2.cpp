#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        unsigned long long int n;
        cin >> n;
        if(n & (n - 1))    cout << "False" << endl;
        else cout << "True" << endl;
    }

    return 0;
}