#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int rev=0,N=n;
	    while(n>0){
	        rev=rev*10+n%10;
	        n/=10;
	    }
	    if(rev==N)cout << "wins" << endl;
	    else cout << "loses" << endl;
	}
	return 0;
}
