#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    char c;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(isupper(s[i]))  c=s[i]+32;
        else c=s[i]-32;
        cout << c;
    }
    return 0;
}
