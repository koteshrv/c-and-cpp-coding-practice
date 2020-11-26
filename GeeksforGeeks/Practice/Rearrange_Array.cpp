#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int maxIndex = n - 1, minIndex = 0;
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                b[i] = a[maxIndex];
                maxIndex--;
            }
            else {
                b[i] = a[minIndex];
                minIndex++;
            }
            
        }
        
        for(int i = 0; i < n; i++)  cout << b[i] << " ";
        cout << endl;
        a.clear();
        b.clear();
    }
    return 0;
}