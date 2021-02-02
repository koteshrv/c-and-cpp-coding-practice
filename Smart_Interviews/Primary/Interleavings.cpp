#include <bits/stdc++.h>
using namespace std;

vector<string> s;

void interleavings(char *a, char *b, char *istr, int m, int n, int i) {
    if(m == 0 && n == 0) s.push_back(istr);
    if(m != 0) {
        istr[i] = a[0];
        interleavings(a + 1, b, istr, m - 1, n, i + 1);
    }
    if(n != 0) {
        istr[i] = b[0];
        interleavings(a, b + 1, istr, m, n - 1, i + 1);
    }
}

int main() {

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        string a, b;
        cin >> a >> b;
        if(a[0] > b[0]) swap(a, b);
        cout << "Case #" << i << ":" << endl;
        int m = a.size(), n = b.size();
        char s1[m], s2[n];
        strcpy(s1, a.c_str());
        strcpy(s2, b.c_str());
        char *istr = new char[((m + n + 1) * sizeof(char))];
        istr[m + n] = '\0';
        interleavings(s1, s2, istr, m, n, 0);
        sort(s.begin(), s.end());
        for(int j = 0; j < int(s.size()); j++) cout << s[j] << endl;
        s.clear();
    }

    return 0;
}