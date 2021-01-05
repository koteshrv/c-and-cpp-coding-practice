#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long n;
	    cin >> n;
	    long long ar[n];
	    for(long long i=0;i<n;i++)    cin >> ar[i];
	    sort(ar,ar+n);
	    cout << ar[0]*(n-1) << endl;
	}
	return 0;
}
