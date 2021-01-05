#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int count = 1;
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(i == 0 && j == 0) {
                    cout << "O";
                    continue;
                }
                if(count == n)  cout << "X";
                else {
                    cout << ".";
                    count++;
                }
            }
            cout << endl;
        }
    }

    return 0;
}