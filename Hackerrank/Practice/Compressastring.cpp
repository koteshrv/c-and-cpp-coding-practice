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
    int n = s.size(), count = 0;
    for(int i = 0; i < n; i++) {
        if(count==0){
            cout << s[i]; 
            count++;
        }
        else {
            if(s[i]==s[i-1])    count++;
            else {cout << count << s[i];
            count = 1;}
        }
    }
    cout << count;
    return 0;
}
