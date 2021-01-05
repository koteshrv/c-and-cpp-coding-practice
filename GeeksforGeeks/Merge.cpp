#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
    	int n, m;
    	cin >> n >> m;
    	vector<int> v1(n), v2(m), v(n + m + 1);
    	for(int i = 0; i < n; i++)  cin >> v1[i];
    	for(int i = 0; i < m; i++)  cin >> v2[i];

        int i = 0, j = 0;
    	for(int k = 0; k < n + m; k++) {
    	    if(i < n && j < m) {
                if(v1[i] <= v2[j]) {
                    v[k] = v1[i];
                    i++;
                }

                else {
                    v[k] = v2[j];
                    j++;
                }
            }

            else if(i < n && j >= m) {
                v[k] = v1[i];
                i++;
            }

            else {
                v[k] = v2[j];
                j++;
            }
    	}
    	
    	for(int i = 0; i < n + m; i++)  cout << v[i] << " ";
    	cout << endl;
	}
	
	return 0;
}