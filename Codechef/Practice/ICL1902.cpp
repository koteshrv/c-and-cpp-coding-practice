#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int count = 0;
        while(n) {
            int x = sqrt(n);
            n -= x * x;
            count++;
        } 
        cout << count << endl;
    }

    return 0;
}