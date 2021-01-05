#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int basicSalary;
	    cin >> basicSalary;
	    double gross;
	    if(basicSalary<1500)    gross=2*basicSalary;
	    else gross=(1.98*basicSalary)+500;
        cout.precision(2);
	    cout << fixed << gross << endl;
	}
	return 0;
}
