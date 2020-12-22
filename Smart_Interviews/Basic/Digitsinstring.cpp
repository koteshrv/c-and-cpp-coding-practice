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
    int count = 0;
    for(int i = 0; i < int(s.size()); i++) 
        if(isdigit(s[i])!=0) count++;
    string ans = count==int(s.size())?"Yes":"No";
    cout << ans;
    return 0;
}
