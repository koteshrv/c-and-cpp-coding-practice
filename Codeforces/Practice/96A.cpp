#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int zero=0,one=0,n=s.size(),f=0;
    (s[0]=='0')?zero++:one++;
    for(int i = 1; i < n; i++){
        if(s[i]=='1'&&s[i-1]=='0')  zero=0;
        if(s[i]=='0'&&s[i-1]=='1')  one=0;
        if(s[i]=='0')   zero++;
        if(s[i]=='1')   one++;
        if(zero>=7||one>=7) {
            cout << "YES";
            f=1;
            break;
        }
    }
    if(f==0) cout << "NO";
    return 0;
}