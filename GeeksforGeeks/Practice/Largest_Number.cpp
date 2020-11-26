#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int compare(string x, string y) {
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx) > 0 ? 1 : 0;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<string> a(n, "");
	    for(int i = 0; i < n; i++)  cin >> a[i];
	    sort(a.begin(), a.end(), compare);
	    for(int i = 0; i < n; i++)  cout << a[i];
	    cout << endl;
	}
	return 0;
}