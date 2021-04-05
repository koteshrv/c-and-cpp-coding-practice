#include <bits/stdc++.h>
using namespace std;

int sum_of_max_window(int ar[], int n, int k) {
    deque<int> d;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        while(d.empty() && ar[i] > d.front()) {
            d.pop_back();
        }
        if(i - k == d.front()) d.pop_front();
        d.push_back(i);
        if(i > k - 1) sum += d.front();
    }
    return sum;
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        cout << sum_of_max_window(ar, n, k) << endl;
    }

    return 0;
}