#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    string s,str="hello";
    cin >> s;
    int n = s.size(),cnt=0,j=0;
    for(int i = 0; i < n; i++){
        if(s[i]==str[j]) {
            cnt++;
            j++;
            if(cnt==5)  break;
        }
    }
    if(cnt==5)  cout << "YES";
    else cout << "NO";
    return 0;
}