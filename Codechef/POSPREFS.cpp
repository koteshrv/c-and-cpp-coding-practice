#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int ar[n];
        if(n % 2) 
            for(int i = 1; i <= n; i++) {
                if(i % 2)  ar[i - 1] = i;
                else ar[i - 1] = -i;
            }
                
        else {
            for(int i = 1; i <= n; i++) {
                if(i % 2)  ar[i - 1] = -i;
                else ar[i - 1] = i;
            }    
        }
        int pos = ceil(n / 2);
        if(pos < k) {
            for(int i = n - 1; i >= 0; i--) {
                if(ar[i] < 0)   {
                    ar[i] *= -1;
                    pos++;
                }
                if(pos == k)    break;
            }
        }
        
        if(pos > k) {
            for(int i = n - 1; i >= 0; i--) {
                if(ar[i] > 0)   {
                    ar[i] *= -1;
                    pos--;
                }
                if(pos == k)    break;
            }   
        }
        for(int i = 0; i < n; i++)  cout << ar[i] << " ";
        
        cout << endl;
    }
    return 0;
}