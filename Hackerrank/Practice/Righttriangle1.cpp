#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count = 0;
    cin >> n;
    int j = 1;
    for(int i = 1; i <= n; i++) {
        while(1){
            if(count == i) break;
            cout << j++ << " ";
            count ++;
        }
        cout << endl;
        count = 0;
    }
    return 0;
}
