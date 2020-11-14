#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    string rev;
    int n = s.size();
    for(int i=n-1;i>=0;i--) rev+=s[i];
    if(t==rev)  cout << "YES";
    else cout << "NO";
    return 0;
}
