#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> binary;
        
        if(n == 0)  cout << 0 << endl;
        else {
            while(n > 0) {
            binary.push_back(n % 2);
            n /= 2;
            }

            for(int i = binary.size() - 1; i >= 0; i--) cout << binary[i];
            cout << endl;
        }
    }

    return 0;
}