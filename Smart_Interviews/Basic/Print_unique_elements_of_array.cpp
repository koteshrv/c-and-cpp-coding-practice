#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, j;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            if(a[i] == a[j] && i != j)  break;
        }
        if(j == n) cout << a[i] << " ";
    }
    return 0;
}