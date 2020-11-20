#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long q,p;
	    cin >> q >> p;
	    double tot=0.0;
	    tot=q*p;
	    cout.precision(6);
	    if(q>1000) tot=0.9*q*p;
	    cout << fixed << tot << endl;
	}
	return 0;
}
