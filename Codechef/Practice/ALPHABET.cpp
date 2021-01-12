#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	cin >> str;
	set<char> s1, s2;
	for(int i = 0; i < str.size(); i++) s1.insert(str[i]);
	int t;
	cin >> t;
	while(t--) {
	    string st;
	    cin >> st;
	    for(int i = 0; i < st.size(); i++) s2.insert(st[i]);
	    cout << (s1 == s2 && s1.size() == s2.size()  ? "Yes" : "No") << endl;
	    s2.clear();
	}
	return 0;
}
