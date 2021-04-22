#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> um;

void operation(int k) {
    if(um.find(k - 1) == um.end() && um.find(k + 1) == um.end()) {
        um[k + 1]++;
        um[k]--;
    }
    else if(um.find(k - 1) == um.end()) {
        um[k - 1]++;
        um[k]--;
    }
    else if(um.find(k + 1) == um.end()) {
        um[k + 1]++;
        um[k]--;
    }
    else if(um[k] > um[k + 1] && um[k] > um[k - 1] && um[k] - um[k + 1] > 1) {
        um[k + 1]++;
        operation(k + 1);
        um[k]--;
    }
    else if(um[k] > um[k + 1] && um[k] > um[k - 1] && um[k] - um[k - 1] > 1) {
        um[k - 1]++;
        operation(k - 1);
        um[k]--;
    }   
}

int getMax(unordered_map<int, int> um) {
    int m = INT_MIN;
    for(auto i: um) m = max(m, i.second);
    return m;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int k;
        while(n--) {
            cin >> k;
            um[k]++;
            if(um[k] > 1) operation(k);
        }
        /*int len = um.size(), m = getMax(um);
        vector<int> v;
        for(int x: um) v.push_back(um.second);
        int ar[len][m], ;
        for(int i = m - 1; i >= 0; i++) {
            
        }*/
        for(auto i : um) cout << i.first << " " << i.second << endl;
        um.clear();
        cout << endl;
    }

    return 0;
}