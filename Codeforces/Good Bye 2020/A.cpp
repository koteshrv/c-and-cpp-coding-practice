#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        unordered_set<int> s;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                s.insert(abs(ar[i] - ar[j]));
            }
        }
        cout << int(s.size()) << endl;
    }

    return 0;
}