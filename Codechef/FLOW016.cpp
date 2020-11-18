#include <iostream>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0)    return a;
    return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long a,b;
	    cin >> a >> b;
	    cout << gcd(a,b) << " " << (a*b)/gcd(a,b) << endl;
	}
	return 0;
}
