#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, m, k, temp;
        cin >> n >> m >> k;
        unordered_map<int, long long> count;
        for(int i = 0; i < k; i++) {
            cin >> temp;
            count[temp]++;
        }
        int plag_count = 0;
        vector<int> plag_id;
        for(auto i: count) {
            if(i.first <= n && i.second > 1) {
                plag_count++;
                plag_id.push_back(i.first);
            }
        }
        sort(plag_id.begin(), plag_id.end());
        cout << plag_count << " ";
        for(int i = 0; i < plag_id.size(); i++) cout << plag_id[i] << " ";
        cout << endl;
    }

    return 0;
}