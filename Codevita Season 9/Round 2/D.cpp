#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    map<char, int> in;
    map<char, int> out;
    string s;
    for(int p=0; p <= n; p++) {
        getline(cin ,s);
        int len = s.size();
        //some passengers entered and no one left
        if(s[0] != '-' && s[len - 1] == '-') {
            for(int i = 0; i < len - 3; i+=2) {
                in.insert(pair<char, int>(s[i], p));
            }
        }
        // some passengers entered and some passengers left
        else if(s[0] != '-' && s[len - 1] != '-') {
            int i, f = 0;
            for(i = 0; i < len; i+=2) {
                if(s[i] == '|') f = 1;
                else {
                    in.insert(pair<char, int>(s[i], p));
                    if(f) out.insert(pair<char, int>(s[i], p));
                }
            }
        }
        // no passengers entered and some left

        else {
            for(int i = 4; i < len; i+=2) {
                out.insert(pair<char, int>(s[i], p));
            }
        }
        
            
    }

    int q;
    cin >> q;
    int ar[q][2];
    for(int j = 0; j < q; j++) cin >> ar[q][0] >> ar[q][1];
/*
     map<char, int>::iterator itr;
        for(itr = in.begin(); itr != in.end(); ++itr) {
            cout << itr->first << " " << itr->second << endl;
        }
       

        for(itr = out.begin(); itr != out.end(); ++itr) {
            cout << itr->first << " " << itr->second << endl;
        }
    */
    int z = 0;
    for(auto it1 = in.begin(), endit1 = in.end(), it2 = out.begin(), endit2 = out.end(); it1 != endit1, it2 != endit2;it1++, it2++) {
        if(it1->first == it2->first) {
            int d = it2->second - it1->second, e = ar[z][1] - ar[z][0]; 
            cout << "d " << d << " e " << e << endl;
            if(d != e) {
                if(d > e) cout << it1->first << " " << ar[z][1] << " " << it2->second <<  " OT" << endl;
                else cout << it1->first << " " << it2->second << " " << ar[z][1] << " UT" << endl;
            }

        }
        z++;
    }
   
    return 0;
}