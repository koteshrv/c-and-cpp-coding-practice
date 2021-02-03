#include <bits/stdc++.h>
using namespace std;

#define MAX 100000001
bool ar[MAX] = {false};

void apowb() {
    for(int p = 2; p * p <= MAX; p++) {
        if(ar[p] == false) {
            for(long long i = p * p; i <= MAX; i *= p) ar[i] = true;
        }
    } 
}


int main() {
    apowb();
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        printf((ar[n] ? "Yes\n" : "No\n"));
    }

    return 0;
}