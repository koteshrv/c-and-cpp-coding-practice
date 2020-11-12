#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) cout << "* ";
    cout << endl;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(j == 0 || j == n-i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
