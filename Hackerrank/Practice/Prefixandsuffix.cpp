#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    int n=s.size();
    if(n < 2) {cout << 0;exit(0);}
 
    int len=0,i=(n+1)/2;
    
    while(i<n){
        if(s[i]==s[len]) {
          ++len;
          ++i;
        }
        else{
          i = i - len + 1;
          len = 0;
        }
    }
    cout << len;
    return 0;
}
