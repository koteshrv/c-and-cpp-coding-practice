#include <bits/stdc++.h>
using namespace std;

int possible(int ar[], int n, int k) {
    unordered_map<int, bool> um;
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] % k == 0) c++;
        um[ar[i] % k] = true;
    }
    int count = 0;
    for(auto i: um) if(um.find(i.first) != um.end()) count++;
    if(count == n - c) return 1;
    return 0;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        if(possible(ar, n, k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}