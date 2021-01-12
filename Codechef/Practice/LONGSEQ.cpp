#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int zeros = 0;
	    for(int i = 0; i < s.size(); i++) if(s[i] == '0') zeros++;
	    int ones = s.size() - zeros;
	    if(zeros == 1 || ones == 1) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
	return 0;
}
