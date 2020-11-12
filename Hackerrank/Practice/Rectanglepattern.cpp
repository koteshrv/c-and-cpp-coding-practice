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
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            if(j == i) cout << "*";
            else cout << j;
        }
        cout << endl;
    }
    return 0;
}
