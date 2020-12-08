#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,c = 1;
    cin >> t;
    while(t--) {
        cout << "Test Case #" << c << ":" << endl;
        int n;
        cin >> n;
        int ar[n][n];
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < n; j++)  cin >> ar[i][j];
        for(int col = 0; col < n; col++) {
            for(int row = n - 1; row >= 0; row--) {
                cout << ar[row][col] << " ";
            }
            cout << endl;
        }
        c++;
    }
    return 0;
}
