#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1) {
        int n; 
        cin >> n;
        if(n == -1) break;
        if(n == 1) cout << "Y" << endl;
        else {
            int i = 1;
            n--;
            while(n > 0) {
                n -= 6 * i;
                i++;
            }
            if(n == 0) cout << "Y" << endl;
            else cout << "N" << endl;
        }
    }

    return 0;
}