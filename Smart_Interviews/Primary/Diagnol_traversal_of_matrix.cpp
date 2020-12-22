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
            for(int j = 0; j < n; j++)  
                cin >> ar[i][j];

        int d = n + n - 1, sum = 0;
        for(int i = 0; i < d; i++) {
            for(int r = 0; r < n; r++) {
                for(int c = 0; c < n; c++) {
                    if(r - c == i - n + 1)  sum += ar[r][c];
                }
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << endl;
    }

    return 0;
}