#include <bits/stdc++.h>
using namespace std;

int checkbit(int n, int i) {
    int a = (n & (1 << (i - 1)) ? 1 : 0);
    return a;
}
bool subset(int ar[], int n, int s) {
    for(int i = 0; i < (1 << n); i++) {
        int ans = 0;
        for(int j = 0; j < n; j++) {
            if(checkbit(j, i) == 1) ans += ar[j];
            if(ans == s)    return 1;
        }
    }
    return 0;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, s;
        cin >> n >> s;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        cout << subset(ar, n, s) << endl;
    }

    return 0;
}