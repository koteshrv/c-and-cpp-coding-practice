#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a,e=0,o=0;
	for(int i = 0; i < n; i ++) {
	    cin >> a;
	    if(a%2==0)  e++;
	    else o++;
	}
	if(e>o) cout << "READY FOR BATTLE" << endl;
	else cout << "NOT READY" << endl;
	return 0;
}
