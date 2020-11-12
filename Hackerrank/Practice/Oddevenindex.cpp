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
    int n = s.size();
    for(int i = 1; i < n; i+=2) cout << s[i];
    for(int i = 0; i < n; i+=2) cout << s[i];
    
    return 0;
}
