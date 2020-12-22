#include <bits/stdc++.h>
using namespace std;

int countWords(string s) {
    int flag = 0, count = 0 , n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')  flag = 0;
        else if(flag == 0)  {
            flag = 1;
            count++;
        }
    }
    return count;
}

vector<int> ans(string s) {
    int v = 0, c = 0, len = s.size();
    vector<int> vec;
    for(int i = 0; i < len; i++)   {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            v++;

        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))   c++;
    }
    vec.push_back(v);
    vec.push_back(c);
    vec.push_back(countWords(s));
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