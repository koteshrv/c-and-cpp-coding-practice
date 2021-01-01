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
        int max = *max_element(vec.begin(), vec.end());
        int rows = 1, cols = max;
        string str(cols + 1, '.');
        vector<string> matrix(rows, str);
        for(int i = 0; i < n; i++) {
            if(matrix[rows][vec[i]] == '.') matrix[rows][vec[i]] = 'O';
            else {
                matrix.resize(++rows, str);
                if(matrix[rows - 1][vec[i] + 1] == 'O' && matrix[rows - 1][vec[i] - 1] == 'O' && vec[i - 1] >= 0 && vec[i + 1] <= cols) 
                    matrix[rows][vec[i]] = 'O';

                else if(vec[i] == 0) {
                    //if(matrix[rows - 1][vec[i] + 1] == 'O') matrix[rows - 1].insert()
                }
            }
        }
    }

    return 0;
}


/*
string s(10, '.');
	int rows = 1;
	vector<string> str(rows, s);
	str[0][0] = 'O';
	str.resize(++rows, s);
	int len = str[rows].size() + 1;
	str[rows].resize(len, '.');
	str[rows].insert(0, 'O');
	for(int i = 0; i < str.size(); i++) cout << str[i] << endl;
*/