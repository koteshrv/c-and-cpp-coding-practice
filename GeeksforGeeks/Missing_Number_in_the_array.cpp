#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    long long n, a, sum = 0;
	    cin >> n;
	    sum = (n * (n + 1)) / 2;
	    for(int i = 0; i < n - 1; i++) {
	        cin >> a;
	        sum -= a;
	    }
	    cout << sum << endl;
	}
	return 0;
}