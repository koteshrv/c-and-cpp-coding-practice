#include <bits/stdc++.h>
using namespace std;

int count(int ar[], int m, int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(m <= 0 && n >= 1) return 0;
    return count(ar, m - 1, n) + count(ar, m, n - ar[m - 1]);
}

int main() {

    int t = 1;
    cin >> t;
    int ar[] = {1, 2, 3};
    while(t--) {
        int n;
        cin >> n;
        cout << count(ar, 3, n) << endl;   
    }

    return 0;
}