#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    int ar[26] = {0};
    for(int i = 0; i < int(s.size()); i++) 
        if(s[i] >= 'a' && s[i] <= 'z') ar[s[i] - 'a']++;
    int count = 0;
    for(int i = 0; i < 26; i++) if(ar[i] > 0) count++;
    cout << count << endl;
    return 0;
}