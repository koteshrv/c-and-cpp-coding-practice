#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& vec, vector<vector<int>>& res, vector<int>& subset, int index) {
    if(subset.size() > 0)   res.push_back(subset);
    for(int i = index; i < int(vec.size()); i++) {
        subset.push_back(vec[i]);
        subsets(vec, res, subset, i + 1);
        subset.pop_back();
    }
    return res;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        sort(vec.begin(), vec.end());
        vector<int> subset;
        vector<vector<int>> res;
        int index = 0;
        vector<vector<int>> ans = subsets(vec, res, subset, index);  
        for(int i = 0; i < int(ans.size()); i++) {
            for(int j = 0; j < int(ans[i].size()); j++)  cout << ans[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}   