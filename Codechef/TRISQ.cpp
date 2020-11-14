#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    n=floor((n-2)/2);
	    cout << n*(n+1)/2 << endl;
	}
	return 0;
}
