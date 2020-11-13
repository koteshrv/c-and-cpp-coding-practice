#include <iostream>
using namespace std;

// https://www.geeksforgeeks.org/factorial-large-number/
// https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/

int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;
 
    for(int i=0; i<res_size; i++) { 
        int prod = res[i] * x + carry; 
        res[i] = prod % 10;   
        carry  = prod/10;     
    } 
  
    while(carry) { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

void factorial(int n) { 
    int res[200]; 
    res[0] = 1; 
    int res_size = 1; 
 
    for (int x=2; x<=n; x++) res_size = multiply(x, res, res_size); 
  
    for (int i=res_size-1; i>=0; i--) cout << res[i]; 
    cout << endl;
} 
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long n,fact=1;
	    cin >> n;
	    factorial(n);
	}
	return 0;
}
