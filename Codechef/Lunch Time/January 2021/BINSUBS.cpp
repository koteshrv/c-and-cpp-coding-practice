#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int> vec) {
    if(vec.size() == 0) return 0;

    vector<int> v(vec.size(), 0);
    int len = 1;

    v[0] = vec[0];
    for(int i = 1; i < vec.size(); i++) {
        auto b = v.begin(), e = v.begin() + len;
        auto it = upper_bound(b, e, vec[i]);
        if(it == v.begin() + len) v[len++] = vec[i];
        else *it = vec[i];
    }
    return len;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        char k;
        vector<int> ar(n);
        for(int i = 0; i < n; i++) {
            cin >> k;
            ar[i] = k - '0';
        }
        
        cout << n - LIS(ar) << endl;
        
    }

    return 0;
}