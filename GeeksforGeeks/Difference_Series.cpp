#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int sum = 3;
	    int k = 7;
	    for(int i = 1; i < n; i++)  {
	        sum += k;
	        k += 4;
	    }
	    cout << sum << endl;
	}
	return 0;
}
