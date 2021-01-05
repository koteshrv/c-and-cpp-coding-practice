#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >>s2;
        int diff=0,same=0,q=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]&&s1[i]!='?'&&s2[i]!='?')  diff++;
            else if(s1[i]=='?'&&s2[i]=='?') q++;
            //else same++;
        }
        cout << diff << " " << q << endl;
    }
    return 0;
}