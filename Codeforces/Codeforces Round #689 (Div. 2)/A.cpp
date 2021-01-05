#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        
        for(int i = 0; i < k; i++) cout << "a";
        
        n -= k;
        int x = 1;
        for(int i = 0; i < n; i++) {
            if(x == 1) {
                cout << "b";
                x++;
            }
            else if(x == 2) {
                cout << "c";
                x++;
            }

            else if(x == 3) {
                cout << "a";
                x = 1;
            }
        }
        cout << endl;
    }

    return 0;
}
