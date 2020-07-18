#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int sum = 1;
	    for(int i = 2; i <= n; i++) sum += i;
	    cout << sum << endl;
	}
	return 0;
}
