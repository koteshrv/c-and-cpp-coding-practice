#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int lps(string s) {
    int n = s.size();
    int len = 0, i = 0, j = 1;
    while(i < n - 1 && j < n) {
        if(s[i] == s[j]) {
            len++;
            i++;
        }
        else {
            len = 0;
            i = 0;
        }
         j++;
    }
    return len;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    cout << lps(s) << endl;
}
