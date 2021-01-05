#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string a, b;
        int len = s.size();
        if(len % 2 != 0) {
            for(int i = 0; i < (len / 2); i++)   a += (s[i]);
            for(int i = (len / 2) + 1; i < len; i++) b += (s[i]);
        }
        else {
            for(int i = 0; i < (len / 2); i++)   a += (s[i]);
            for(int i = (len / 2); i < len; i++) b += (s[i]);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b)  cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
}