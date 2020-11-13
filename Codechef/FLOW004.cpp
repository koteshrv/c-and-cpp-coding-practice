#include <iostream>
using namespace std;

int main() {
	// your code goes here.
	int t;
	cin >> t;
	while(t--) {
	    int n,ans=0;
	    cin >> n;
	    ans+=n%10;
	    while(n>=10)    n/=10;
	    ans+=n;
	    cout << ans << endl;
	}
	return 0;
}
