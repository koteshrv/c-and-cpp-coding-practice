#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        set<int> s;
        for(int i = n - 1; i >= 0; i--) {
            if(s.find(vec[i] + 1) == s.end()) s.insert(++vec[i]);
            else s.insert(vec[i]);
        }
        cout << int(s.size()) << endl;
    }

    return 0;
}