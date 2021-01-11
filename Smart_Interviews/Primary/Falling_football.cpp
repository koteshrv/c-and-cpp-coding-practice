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
        int m = *max_element(vec.begin(), vec.end());
        vector<char> s(m + 1, '.');
        int rows = 1, flag = 0;
        vector<string> v;

        for(int i = 0; i < n; i++) {
            if(s[vec[i]] == '.') s[vec[i]] = 'O';

            else if(s[vec[i]] == 'O' && s[vec[i] + 1] == '.' && 
                    s[vec[i] - 1] == '.' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    s[vec[i] + 1] = 'O';

            else if(s[vec[i]] == 'O' && s[vec[i] + 1] == 'O' 
                    && s[vec[i] - 1] == '.' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    s[vec[i] - 1] = 'O';

            else if(s[vec[i]] == 'O' && s[vec[i] + 1] == '.' 
                    && s[vec[i] - 1] == 'O' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    s[vec[i] + 1] = 'O';

            else if(s[vec[i]] == 'O' && s[vec[i] + 1] == 'O' && vec[i] == 0) {
                    auto it = s.insert(s.begin(), 'O');
            }

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] - 1] == 'O' && vec[i] == v[rows].size()) {
                    s.push_back('O');
            }
            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == 'O' 
                    && v[rows][vec[i] - 1] == 'O' && vec[i] - 1 >= 0 && vec[i] + 1 < n) {
                    string str(s.begin(), s.end());
                    v.push_back(str);
                    s.clear();
                    vector<char> s(m + 1, '.');
                    s[vec[i]] = 'O';
            }    
        }
        
        for(int i = v.size() - 1; i >= 0; i--) {
            for(int j = 0; j < v[rows].size(); j++) {
                cout << v[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}