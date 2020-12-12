#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        unsigned int rev = 0;
        int k = 0;
        while(n) {
            rev += pow(2, 31 - k) * (n % 2);
            k++;
            n /= 2;
        }
        cout << rev << endl; 
    }

    return 0;
}