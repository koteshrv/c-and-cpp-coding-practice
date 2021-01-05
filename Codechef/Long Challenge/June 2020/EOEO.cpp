#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned long long int ts, js;
		cin >> ts;
		if(ts == 1) js = 0;
		if(ts % 2 == 0)	js = ts / 2;
		else js = (ts - 1) / 2;
		cout << js << "\n";
	}

	return 0;
}
