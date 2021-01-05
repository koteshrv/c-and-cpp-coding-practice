#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k,coins=0;
	    cin >> n >> k;
	    for(int i=1;i<=k;i++)   if(n%i>coins)   coins=n%i;
	    cout << coins << endl;
	}
	return 0;
}
