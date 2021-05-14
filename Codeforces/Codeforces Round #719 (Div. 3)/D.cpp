#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        unordered_map<int, int> total;
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
            ar[i] -= i;
            total[ar[i]]++;
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            count += total[ar[i]] - 1;
            total[ar[i]]--;
        }
        cout << count << endl;
    }

    return 0;
}