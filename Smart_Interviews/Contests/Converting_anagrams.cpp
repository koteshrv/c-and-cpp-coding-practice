#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;
        vector<int> c1(26, 0), c2(26, 0);
        for(int i = 0; i < a.size(); i++) c1[a[i] - 'a']++;
        for(int i = 0; i < b.size(); i++) c2[b[i] - 'a']++;
        int count = 0;
        for(int i = 0; i < 26; i++) count += abs(c1[i] - c2[i]);
        cout << count << endl;
    }

    return 0;
}