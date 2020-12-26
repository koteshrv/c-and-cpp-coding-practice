#include <bits/stdc++.h>
using namespace std;

int checkHoroscope(vector<vector<int>> ar, int n, int m) {

    int d = n + m - 1;
    vector<int> vec;
	for(int i = 0; i < d; i++) {
	    for(int r = 0; r < n; r++) {
	        for(int c = 0; c < m; c++) {
	            if(r - c == i - m + 1)  {
	                //cout << "loop" << ar[r][c] << " ";
	                vec.push_back(ar[r][c]);
	            }
	        }
        }
        int sum = accumulate(vec.begin(), vec.end(), 0);
        // cout << sum << vec[0] * vec.size() << endl;
        if(sum != vec[0] * vec.size()) return 0;
        vec.clear();
    }
    return 1;

}
int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> ar(n, vector<int> (m, 0));
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++) cin >> ar[i][j];
        int q;
        cin >> q;
        int x, y, v;
        for(int i = 0; i < q; i++) {
            cin >> x >> y >> v;
            ar[x - 1][y - 1] = v;
            if(checkHoroscope(ar, n, m)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        
    }

    return 0;
}