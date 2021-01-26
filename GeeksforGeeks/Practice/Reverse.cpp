#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n,d;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++)  cin >> arr[i];
	    cin >> d;
	    int fixed_arr[n - d], temp[d];
	    for(int i = 0; i < d; i++)  temp[i] = arr[i];
	    int pos = 0;
	    for(int i = d; i < n; i++) {
	        arr[pos] = arr[i];
	        pos++;
	    }
	    pos = 0;
	    for(int i = n - d; i < n; i++) {
	        arr[i] = temp[pos];
	        pos++;
	    }
	    
	    for(int i = 0; i < n; i++)  cout << arr[i] << " ";
	    
	}
	return 0;
}