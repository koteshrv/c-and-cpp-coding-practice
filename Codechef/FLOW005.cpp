#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n,count=0;
	    cin >> n;
	    while(n>0) {
	        if(n>=100){
	            count+=n/100;
	            n-=100*(n/100);
	        }
	        if(n>=50){
	            count+=n/50;
	            n-=50*(n/50);
	        }
	        if(n>=10){
	            count+=n/10;
	            n-=10*(n/10);
	        }
	        if(n>=5){
	            count+=n/5;
	            n-=5*(n/5);
	        }
	        if(n>=2){
	            count+=n/2;
	            n-=2*(n/2);
	        }
	        else{
	            count+=n;
	            n-=n;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
