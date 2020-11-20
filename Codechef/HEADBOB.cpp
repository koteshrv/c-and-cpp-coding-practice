#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    string s;
	    cin >> s;
	    int n=count(s.begin(),s.end(),'N');
	    int y=count(s.begin(),s.end(),'Y');
	    int i=count(s.begin(),s.end(),'I');
	    if(i>y)    cout << "INDIAN" << endl;
	    else if(y>i)   cout << "NOT INDIAN" << endl;
	    else cout << "NOT SURE" << endl;
	}
	
	return 0;
}
