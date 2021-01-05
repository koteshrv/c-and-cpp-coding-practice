#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int a = count(s.begin(),s.end(),'a');
	    int b = count(s.begin(),s.end(),'b');
	    cout << (a > b ? b : a) << endl;
	}
	return 0;
}
