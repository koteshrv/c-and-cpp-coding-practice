#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	for(int i = 0; i < n; i++) cout << a[i] << endl;
	return 0;
}
