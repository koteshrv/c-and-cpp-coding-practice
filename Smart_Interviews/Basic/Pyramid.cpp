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
    int tot = n*2-1, pos = tot/2 + 1,start;
    for(int i = 1; i <= n; i++) {
        start=pos-i;
        for(int j = 0; j < tot; j++) {
            if(j==start) {
                for(int k = 0; k < i*2-1; k++) {
                    cout << "*";
                }
            }
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
