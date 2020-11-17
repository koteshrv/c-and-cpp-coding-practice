#include <bits/stdc++.h>
#include <string>
using namespace std;

int upperstr(string s,int k){
    int n=s.size(),count=0;
    for(int i=k;i<n;i++)    if(isupper(s[i]))   count++;
    if(count==n-k)    return 1;
    return 0;
}

string tolowstr(string s,int k){
    int n=s.size();
    for(int i=k;i<n;i++)    s[i]=tolower(s[i]);
    return s;
}

int main(){
    string s;
    cin >> s;
    if(islower(s[0])&&int(s.size())==1) {
        s=toupper(s[0]);
        cout << s;
        return 0;
    }
    if (isupper(s[0])&&int(s.size())==1) {
        s=tolower(s[0]);
        cout << s;
        return 0;
    }
    if((islower(s[0])&&upperstr(s,1))){
        s=tolowstr(s,0);
        s[0]=toupper(s[0]);
    }
    if(upperstr(s,0))   s=tolowstr(s,0);
    if(islower(s[0])&&int(s.size())==1) s=toupper(s[0]);
    cout << s;
    return 0;
}