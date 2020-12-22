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
    int a[n][n]={0},ptr=0,num=0;
    
    for(int i = ptr; i < n; i++) {
        for(int j = ptr; j < n; j++) {
            a[i][j] = ++num;
        }
        ptr++;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j][i]!=0) cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
