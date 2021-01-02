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
        vector<vector<char>> v(5, vector<char> (20, '.'));
        int rows = 1;

        for(int i = 0; i < n; i++) {
            if(v[rows][vec[i]] == '.') v[rows][vec[i]] = 'O';

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == '.' && 
                    v[rows][vec[i] - 1] == '.' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    v[rows][vec[i] + 1] = 'O';

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == 'O' 
                    && v[rows][vec[i] - 1] == '.' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    v[rows][vec[i] - 1] = 'O';

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == '.' 
                    && v[rows][vec[i] - 1] == 'O' && vec[i] - 1 >= 0 && vec[i] + 1 < n)

                    v[rows][vec[i] + 1] = 'O';

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == 'O' && vec[i] == 0) {
                    v.resize(rows, vector<char> (++cols));
                auto it = v[rows].insert(v[rows].begin(), 'O');
            }

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] - 1] == 'O' && vec[i] == cols) {
                    v.resize(rows, vector<char> (++cols, '.'));
                v[rows].push_back('O');
            }

            else if(v[rows][vec[i]] == 'O' && v[rows][vec[i] + 1] == 'O' 
                    && v[rows][vec[i] - 1] == 'O' && vec[i] - 1 >= 0 && vec[i] + 1 < n) {
                        v.resize(++rows, vector<char> (cols, '.'));
                        v[rows][vec[i]] = 'O';
            }    
        }*/
        for(int i = v.size() - 1; i >= 0; i--) {
            for(int j = 0; j < v[rows].size(); j++) {
                cout << v[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}