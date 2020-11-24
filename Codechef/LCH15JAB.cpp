#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int n=s.size();
	    vector<int> ar(26,0);
	    for(int i=0;i<n;i++) ar[s[i]-97]++;
	    sort(ar.begin(),ar.end());
	    int sum = accumulate(ar.begin(),ar.end()-1,0);
        cout << (sum==*max_element(ar.begin(),ar.end())?"YES":"NO") << endl;   
	}
	return 0;
}
