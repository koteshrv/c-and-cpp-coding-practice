#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, count = 1, zeros = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)  {
            cin >> a[i];
            if(a[i] == 0)   zeros++;
            
        }
        
        sort(a.begin(), a.end());
        
        if(zeros == n)
            cout << 0 << endl;
            
        else {
            for(int i = zeros + 1; i < n; i++) {
                if(a[i] != a[i - 1]) {
                    count++;
                }
            }
            
            cout << count << endl;
        }
    }
}