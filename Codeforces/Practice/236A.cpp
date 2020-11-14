#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size(),ar[26]={0},count=0;
    for(int i = 0; i < n; i++)  
        ar[int(s[i])-97]++;
    for(int i = 0; i < 26; i++) {
        if(ar[i]>=1)    count++;
    }
    //  cout << count << endl;
    if(count%2==0)  cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}