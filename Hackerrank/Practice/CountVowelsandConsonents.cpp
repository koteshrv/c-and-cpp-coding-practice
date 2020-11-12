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
    int n = s.size(),vowel=0,consonent=0;
    for(int i = 0; i < n; i++) {
        if(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U') vowel++;
        else consonent++;
    }
    cout << vowel << " " << consonent;
    return 0;
}
