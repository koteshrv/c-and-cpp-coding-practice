#include <iostream>
using namespace std;

int isPrime(int n){
    if(n<=1)    return 0;
    if(n<=3)    return 1;
    if(n%2==0||n%3==0)  return 0;
    for(int i = 5; i*i<= n; i+=6) 
        if(n%i==0||n%i+2==0)  return 0;
    return 1;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
            if(isPrime(i))  cout << i << endl;
        cout << endl;
    }
	return 0;
}