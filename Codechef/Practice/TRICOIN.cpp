#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << (long long)((-1+sqrt(1+4*2*n))/2) << endl;
    }
    return 0;
}