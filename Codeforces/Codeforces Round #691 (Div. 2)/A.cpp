#include <bits/stdc++.h>
using namespace std;

void check(vector<string> r, vector<string> b) {
    int red_count = 0, blue_count = 0, equal = 0, n = max(r.size(), b.size());
    for(int i = 0; i < n; i++)  {
        // cout << r[i] << " " << b[i] << endl;
        if(r[i] > b[i]) red_count++;
        else if(r[i] < b[i])    blue_count++;
        else equal++;
    }
    int m = max(red_count, blue_count);
    m = max(m, equal);

    if(m == red_count)  cout << "RED" << endl;
    else if(m == blue_count)    cout << "BLUE" << endl;
    else cout << "EQUAL" << endl;
}

string toString(char a[], int n) {
    string s = "";
    for(int i = 0; i < n; i++)  s += a[i];
    return s;
} 

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        char red[n], blue[n];
        for(int i = 0; i < n; i++)  cin >> red[i];
        for(int j = 0; j < n; j++)  cin >> blue[j];
        sort(red, red + n);
        sort(blue, blue + n);
        vector<string> r, b;
        r.push_back(toString(red, n));
        b.push_back(toString(blue, n));
        for(int i = 0; next_permutation(red, red + n); i++) r.push_back(toString(red, n));
        for(int i = 0; next_permutation(blue, blue + n); i++) b.push_back(toString(blue, n));
        check(r, b);
    }

    return 0;
}