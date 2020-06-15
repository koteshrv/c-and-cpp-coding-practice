#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> change;
		for(int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			change.push_back(temp);
		}

		long long coinChange[3] = {0};
		int status = 1;
		for(auto it : change) {
			if(it == 10 && coinChange[0] == 0)		status = 0;
			else if (it == 15 && (coinChange[1] == 0 && coinChange[0] < 2))		status = 0;
			else {
				coinChange[(it - 5)/5]++;
				if(it == 10) coinChange[0]--;
				 else if(it == 15) {
					if(coinChange[1] > 0) coinChange[1]--;
					else coinChange[0] -= 2;
				}
			}
		} cout << (status ? "YES" : "NO") << endl;
	}
	return 0;