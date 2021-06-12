#include <bits/stdc++.h>
using namespace std;

int f[1000001];

void fact() {
    int m = 1e9+7;
    f[0] = 1;
    for(int i = 1; i <= 1000000; i++) 
        f[i] = ((f[i - 1] % m) * (i % m)) % m;
}

int main() {
    fact();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", f[n]);
    }
    return 0;
}