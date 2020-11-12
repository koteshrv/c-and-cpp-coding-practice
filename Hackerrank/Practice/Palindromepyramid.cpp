#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a=65;
    char ch;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            ch=a+j;
            cout << ch << " ";
        }
        for(int j = 0; j <= i - 1; j++) {
            ch--;
            cout << ch << " ";
        }
        cout << endl;
        
    }
    return 0;
}
