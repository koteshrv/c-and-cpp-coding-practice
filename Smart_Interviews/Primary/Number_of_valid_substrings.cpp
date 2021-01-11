#include <bits/stdc++.h>
using namespace std;

int count(int ar[], int n) {
    unordered_map<int, int> um;
    int current_sum = 0;
    for(int i = 0; i < n; i++) {
        current_sum += (ar[i] == 0) ? -1 : 1;
        um[current_sum]++;
    }
    int count = 0;
    for(auto it = um.begin(); it != um.end(); it++) 
        if(it -> second > 1) count += ((it -> second * (it -> second - 1)) / 2);
    if(um.find(0) != um.end()) count += um[0];
    return count;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        cout << count(ar, n) << endl;
    }

    return 0;
}