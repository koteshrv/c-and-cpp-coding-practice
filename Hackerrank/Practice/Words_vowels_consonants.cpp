#include <bits/stdc++.h>
using namespace std;

vector<int> ans(string s) {
    int v = 0, words = 0, c = 0, len = s.size();
    vector<int> vec;
    for(int i = 0; i < len; i++)   {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            v++;

        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))   c++;
        if(s[i] == ' ') words++;
    }
    vec.push_back(v);
    vec.push_back(c);
    vec.push_back(words + 1);
    return vec;
}

int main() {

    int t;
    cin >> t;
    cin.ignore(256, '\n');
    while(t--) {
        string s(10008, ' ');
        getline(cin, s);
        while(!s.empty() && isspace(*s.begin()))    s.erase(s.begin());
        while(!s.empty() && isspace(*s.rbegin()))   s.erase(s.length() - 1);
        vector<int> a = ans(s);
        cout << a[2] << " " << a[0] << " " << a[1] << endl;
    }

    return 0;
}