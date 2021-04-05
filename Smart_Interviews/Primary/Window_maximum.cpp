#include <bits/stdc++.h>
using namespace std;

void sum_of_max_window(int ar[], int n, int k) {
    deque<long long> d;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        while(!d.empty() && ar[i] >= ar[d.back()]) {
            d.pop_back();
        }
        d.push_back(i);
        if(i - k >= d.front()) d.pop_front();
        if(i >= k - 1) sum += ar[d.front()];
    }
    cout << sum << endl;
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        sum_of_max_window(ar, n, k);
    }

    return 0;
}