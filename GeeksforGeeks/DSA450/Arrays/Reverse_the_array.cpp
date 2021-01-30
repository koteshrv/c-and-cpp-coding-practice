#include <bits/stdc++.h>
using namespace std;

/*
Time complexity - O(n)
Space complexity - O(1)
*/

// Iterative method
string reverseString(string s) {
    int start = 0, end = s.size() - 1;
    while(start < end) swap(s[start++], s[end--]);
    return s;
}

// Recursive method
string reverse_string(string s, int start, int end) {
    if(start >= end) return s;
    swap(s[start], s[end]);
    return reverse_string(s, start + 1, end - 1);
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        //cout << reverseString(s) << endl;
        cout << reverse_string(s, 0, s.size() - 1) << endl;
    }

    return 0;
}