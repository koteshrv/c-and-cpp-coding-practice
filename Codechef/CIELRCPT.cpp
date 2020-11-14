#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n,i=11,count=0;
        cin >> n;
        while(n>0){
            if(n>=pow(2,i)) {
                count++;
                n-=pow(2,i);
            }
            if(n<pow(2,i)) i--;

        }
        cout << count << endl;
    }
	return 0;
}
