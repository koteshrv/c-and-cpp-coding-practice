#include <cmath>
#include <iostream> 
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    long long sum = 0;
    cin >> s;
    for(int i = 0; i < int(s.size()); i++) {
        sum += s[i] - '0'; 
    }
    cout << sum << endl;
    return 0;
}

