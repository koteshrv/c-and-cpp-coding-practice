#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    for(int i = 0; i < (int)s1.size(); i++) {
        if((int)s1[i]>(int)s2[i])   {
            cout << 1;
            break;
        }
        else if((int)s1[i]<(int)s2[i])  {
            cout << -1;
            break;
        }
        else if(i==(int)s1.size()-1 && (int)s1[i]==(int)s2[i])  cout << 0;
        else continue;
    }
    return 0;
}