#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i: vec) cin >> vec[i];
        vector<int> ans;
        sort(vec.begin(), vec.end());
        int index = 0, count = 1;
        for(int i = 0; i < n; i++) {
            for(int j = index; j < n; j++) {
                ans.push_back(vec[i]);
            }
            while(1) {
                for(int k = 0; k < count; k++) {
                    cout << ans[i] << " ";
                }
                cout << endl;
                count++;
                if(count > int(ans.size()))   break;
            }
            index++;
            ans.clear();
        }    
    }

    return 0;
}   