#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1) {
        int n;
        cin >> n;
        if(n == -1) break;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        int total_sum = accumulate(ar, ar + n , 0);
        int average = floor(total_sum / n);
        if(total_sum == average * n) {
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(average - ar[i] < 0) count += ar[i] - average;
            }
            cout << count << endl;
        }

        else cout << -1 << endl;
    }

    return 0;
}