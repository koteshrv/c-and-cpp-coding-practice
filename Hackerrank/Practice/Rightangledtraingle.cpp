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
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++)  cout << " ";
            for(int k = 0; k < i + 1; k++)  cout << "*";
            cout << endl;
        }
        c++;
    }
    return 0;
}
