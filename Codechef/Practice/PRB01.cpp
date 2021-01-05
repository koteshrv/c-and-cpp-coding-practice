#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n,f=0;
	    cin >> n;
	    if(n<=1) {
	        cout << "no" << endl;
	        f=1;
	    }
	    for(int i = 2; i <= n/2; i++) {
	        if(n%i==0) {
	            cout << "no" << endl; 
	            f=1;
	            break;
	        }
	    }
	    if(f==0) cout << "yes" << endl;
	}
	return 0;
}
