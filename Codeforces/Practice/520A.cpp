#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cin >> n;
    string s;
    cin >> s;
    int ar[26] = {0}, count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            if(ar[int(s[i] - 'a')] == 0) {
                ar[int(s[i] - 'a')] = 1;
                count++;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            if(ar[int(s[i] - 'A')] == 0) {
                ar[int(s[i] - 'A')] = 1;
                count++;
            }
        }
    }
    cout << (count == 26 ? "YES" : "NO") << endl;

    return 0;
}