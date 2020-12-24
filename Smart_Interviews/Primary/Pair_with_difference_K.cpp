#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int low, int high, int n) {
    if(high >= low) {
        int mid = low + (high - low) / 2;
        if(n == ar[mid]) return mid;
        if(n > ar[mid]) return binarySearch(ar, (mid + 1), high, n);
        return binarySearch(ar, low, (mid - 1), n);
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n], f = 0;
        for(int i = 0; i < n; i++) cin >> ar[i];
        sort(ar, ar + n);
        for(int i = 0; i < n - 1; i++) {
            if(binarySearch(ar, i + 1, n - 1, ar[i] + k) != -1) {
                f = 1;
                break;
            }
        }
        if(f) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}
