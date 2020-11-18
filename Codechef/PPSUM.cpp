#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,ans,n;
	    cin >> b >> a;
	    n=a;
	    while(b--){
	        ans=n*(n+1)/2;
	        n=ans;
	    }
	    cout << ans << endl;
	}
	
	return 0;
}
