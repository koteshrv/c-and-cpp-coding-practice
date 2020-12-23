#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[8] = {0};
        int x, y, sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> x >> y;
            if(ar[x - 1] < y && x < 9)   {
                ar[x - 1] = y;  
            } 
        }
        for(int i = 0; i < 8; i++)  sum += ar[i];
        cout << sum << endl;
    }

    return 0;
}