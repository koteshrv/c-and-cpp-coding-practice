#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull printCountDP(int dist) 
{ 
	ull count[dist+1]; 

	// Initialize base values. There is one way to cover 0 and 1 
	// distances and two ways to cover 2 distance 
	count[0] = 1, count[1] = 1, count[2] = 2; 

	// Fill the count array in bottom up manner 
	for (int i=3; i<=dist; i++) 
	count[i] = count[i-1] + count[i-2] + count[i-3]; 

	return count[dist]; 
} 

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        cout << printCountDP(n + 1) << endl;
    }

    return 0;
}