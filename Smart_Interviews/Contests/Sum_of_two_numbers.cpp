#include <bits/stdc++.h>
using namespace std;

bool present(vector<int> v, int s) {
    int n = v.size();
    unordered_set<int> us;
    for(int i = 0; i < n; i++) {
        if(us.find(s - v[i]) != us.end()) return true;
        us.insert(v[i]);
    }
    return false;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        int sum = accumulate(vec.begin(), vec.end(), 0);
        if(sum & 1) cout << "No" << endl;
        else cout << (present(vec, sum / 2) ? "Yes" : "No") << endl;
    }

    return 0;
}