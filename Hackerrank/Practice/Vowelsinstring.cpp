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
    int count = 0, len = s.size();
    for(int i = 0; i < len; i++) 
        if(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U') count++;
    string res = (count==len?"Yes":"No");
    cout << res;
    return 0;
}
