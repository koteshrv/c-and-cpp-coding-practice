#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1) {
        int col;
        cin >> col;
        if(col == 0)  break;
        string s;
        cin >> s;
        int len = s.size();
        int row = len / col;
        char ar[row][col];

        int c = 0, left_to_right = 1, ar_pos = 0 , r = 0;

        while(1) {
            
            if(left_to_right == 1) {
                ar[r][c] = s[ar_pos];
                c++;
            }

            else {
                ar[r][c] = s[ar_pos];
                c--;
            }

            if(c == col)  {
                left_to_right = 0;
                c = col - 1;
                r++;
            }

            if(c == -1) {
                left_to_right = 1;
                c = 0;
                r++;
            }  

            if(r == row)    break;

            ar_pos++;
            
        }

        for(int c = 0; c < col; c++) {
            for(int r = 0; r < row; r++) {
                cout << ar[r][c];
            }
        }

        cout << endl;

    }

    return 0;
}