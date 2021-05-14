#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    long long max_ending_here = 0, max = INT_MIN, a;
	    for(int i = 0; i < n; i++)  {
	        cin >> a;
            max_ending_here += a;
            if(max < max_ending_here)   max = max_ending_here;
            if(max_ending_here < 0) max_ending_here = 0;	   
	    }
	    cout << max << endl;
	}
	return 0;
}
