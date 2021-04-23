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
    else if(um[k] > um[k + 1] && um[k] > um[k - 1] && um[k] - um[k + 1] > 1 && um[k + 1] <= um[k - 1]) {
        um[k + 1]++;
        operation(k + 1);
        um[k]--;
    }
    else if(um[k] > um[k + 1] && um[k] > um[k - 1] && um[k] - um[k - 1] > 1 && um[k + 1] > um[k - 1]) {
        um[k - 1]++;
        operation(k - 1);
        um[k]--;
    }   
}

vector<int> getMax(map<int, int> um) {
    int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MAX;
    map<int, int>::iterator it;
    vector<int> m;
    for(it = um.begin(); it != um.end(); it++) {
        // cout << it->first << " " << it->second << endl;
        m1 = max(m1, it->second);
        m2 = max(m2, it->first);
        m3 = min(m3, it->first);
    }
    if(m3 > 0) m3 = 0;
    m.push_back(m2 - m3 + 1);
    m.push_back(m1);
    m.push_back(m3);
    // cout << "Len Max Min " <<  m[0] << " " << m[1] << " " << m[2] << endl;
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
        vector<int> ma = getMax(um);
        int len = ma[0], m = ma[1], _min = ma[2], index = 0;
        vector<vector<int>> v;
        map<int, int>::iterator it;
        for(it = um.begin(); it != um.end(); it++) v.push_back({it->first - _min, it->second});
        for(int i = 0; i < v.size(); i++) cout << v[i][0] << " " << v[i][1] << endl;
        cout << "len m "<< len << " " << m << endl;
        char ar[len][m];
        for(int j = 0; j < len; j++) {
            int ind = m - 1;
            int empty = m - v[index][1];
            if(j == v[index][0]) {
                cout << "Ball Present in " << j << endl;
                while(v[index][1]--) {
                    cout << "placed ball in " << j << " " << ind << endl;
                    ar[ind--][j] = 'O';
                }
                while(empty--) {
                    cout << "placed dot in " << j << " " << ind << endl;
                    ar[ind--][j] = '.';             
                }
                index++;
            }
            else {
                cout << "Ball not Present in " << j << endl;
                while(ind >= 0) {
                    cout << "placed dot in " << j << " " << ind  << endl;
                    ar[ind--][j] = '.';
                }
            } 
        }
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < len; j++) cout << ar[i][j];
            cout << endl;
        }
        
        //for(auto i : um) cout << i.first << " " << i.second << endl;
        um.clear();
        cout << endl;
    }

    return 0;
}