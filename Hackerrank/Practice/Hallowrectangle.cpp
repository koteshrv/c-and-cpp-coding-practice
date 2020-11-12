#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int w,l;
    cin >> w >> l;
    for(int i = 0; i < l; i++) {
        if(i==0|| i==l-1) {
            for(int j = 0;j<w;j++)  cout << "*";
        }
        else {
            for(int j = 0;j<w;j++)  {
                if(j==0|| j==w-1)   cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
