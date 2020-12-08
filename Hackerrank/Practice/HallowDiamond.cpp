#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, c = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << c << ":" << endl;
        int n;
        cin >> n;
        int spaces = n / 2, i;
        for(i = 0; i < n / 2 + 1 ; i++) {
            for(int j = 0; j < spaces; j++) cout << " ";
            if(i == 0) cout << "*" << endl;
            else {
                cout << "*";
                for(int j = 0; j < 2 * (i - 1) + 1; j++)  cout << " ";
                cout << "*" << endl;
            }
            spaces--;
        }
        spaces = 1;
        int p = n / 2 - 1;
        for(i = n / 2 + 1; i < n ; i++) {
            for(int j = 0; j < spaces; j++) cout << " ";
            if(i == n - 1) cout << "*" << endl;
            else {
                cout << "*";
                for(int j = 0; j < 2 * (p - 1) + 1; j++)  cout << " ";
                cout << "*" << endl;
            }
            spaces++;
            p--;
        }
        c++;
    }
    return 0;
}
