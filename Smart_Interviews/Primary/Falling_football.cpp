#include <bits/stdc++.h>
using namespace std;

map<int, int> um;

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
    else if(um[k] >= um[k + 1] && um[k] >= um[k - 1] && um[k] - um[k + 1] > 1 && um[k + 1] <= um[k - 1]) {
        um[k + 1]++;
        um[k]--;
        operation(k + 1);
    }
    else if(um[k] >= um[k + 1] && um[k] >= um[k - 1] && um[k] - um[k - 1] > 1 && um[k + 1] > um[k - 1]) {
        um[k - 1]++;
        um[k]--;
        operation(k - 1);
    }   
}

vector<int> getMax(map<int, int> um) {
    int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MAX;
    map<int, int>::iterator it;
    vector<int> m;
    for(it = um.begin(); it != um.end(); it++) {
        m1 = max(m1, it->second);
        m2 = max(m2, it->first);
        m3 = min(m3, it->first);
    }
    if(m3 > 0) m3 = 0;
    m.push_back(m2 - m3 + 1);
    m.push_back(m1);
    m.push_back(m3);
    return m;
}

int main() {

    int t;
    cin >> t;

    for(int l = 0; l < t; l++) {
        cout << "Case " << l + 1 << ":" << endl;
        int n;
        cin >> n;
        int k;
        while(n--) {
            cin >> k;
            um[k]++;
            if(um[k] > 1) operation(k);
        }
        vector<int> vec = getMax(um);
        int len = vec[0], m = vec[1], _min = vec[2], index = 0;
        vector<vector<int>> v;
        map<int, int>::iterator it;
        for(it = um.begin(); it != um.end(); it++) {
            v.push_back({it->first - _min, it->second});
            // cout << "first second " << it->first - _min << " " << it->second << endl;
        }
        char ar[m][len];
        int f = 0, pos = 0;
        for(int j = 0; j < len; j++) {
            int ind = m - 1;
            int empty = m - v[index][1];
            if(j == v[index][0]) {
                while(v[index][1]--) ar[ind--][j] = 'O';
                while(empty--)  ar[ind--][j] = '.'; 
                index++;
                f = 1;
            }
            else if(f){
                while(ind >= 0) ar[ind--][j] = '.';
            } 
            else pos++;
        }
        for(int i = 0; i < m; i++) {
            for(int j = pos; j < len; j++) cout << ar[i][j];
            cout << endl;
        }
        
        um.clear();
    }

    return 0;
}