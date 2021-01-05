#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,flag=0;
	    cin >> n;
	    vector<int> ar(n);
	    for(int i=0;i<n;i++)    cin >> ar[i];
	    int hcf=gcd(ar[0],ar[1]);
	    for(int i=2;i<n;i++) {
	        hcf=gcd(hcf,ar[i]);
	        if(hcf==1)  break;
	    }
	    
	    for(int i=0;i<n;i++)   cout << ar[i]/hcf << " ";
	    cout << endl;
	}
	return 0;
}
