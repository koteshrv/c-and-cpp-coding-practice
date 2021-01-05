#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    long long int n,a,b,c;
        cin >> n >>a >>b >>c;
        long long int f[n];
        for(int i=0;i<n;i++){
            cin >>f[i];
        }
        long long int min_time,t1,t2;
        min_time=abs(b-f[0])+abs(a-f[0])+c;
        for(int i=0;i<n;i++){
            t1=abs(b-f[i]);
            t2=abs(a-f[i]);
            if(t1+t2+c<min_time){
                min_time=t1+t2+c;
            }
        }
        cout <<min_time <<endl;
    }
	return 0;
}