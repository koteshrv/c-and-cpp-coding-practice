#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)  cin >> ar[i][j];

        int starting_row = 0, starting_col = 0, ending_row = n, ending_col = n;

        while(starting_row < ending_row && starting_col < ending_col) {

            for(int i = starting_col; i < ending_col; i++)  cout << ar[starting_row][i] << " ";

            starting_row++;

            for(int i = starting_row; i < ending_row; i++)  cout << ar[i][ending_col - 1] << " ";

            ending_col--;

            if(starting_row < ending_row) {
                for(int i = ending_col - 1; i >= starting_col; i--) cout << ar[ending_row - 1][i] << " ";
                ending_row--;
            }

            if(starting_col < ending_col) {
                for(int i = ending_row - 1; i >= starting_row; i--) cout << ar[i][starting_col] << " ";
                starting_col++;
            }
        }
        cout << endl;
    }

    return 0;
}