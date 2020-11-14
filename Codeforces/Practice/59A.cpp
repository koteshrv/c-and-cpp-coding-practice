#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(),cap=0,small=0;
    for(int i=0;i<n;i++) {
        if((int)s[i]>=65 && (int)s[i]<= 90) cap++;
        else small++;
    }
    if(cap>small) transform(s.begin(),s.end(),s.begin(), ::toupper);
    else    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout << s;
    return 0;
}
