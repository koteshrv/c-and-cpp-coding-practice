#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        char ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        vector<char> decode;
        for(int i = 0; i < n; i += 4) {
            int begin = 1, end = 16, mid = 16;
            for(int pos = 0; pos < 4; pos++) {
                mid /= 2;
                if(ar[i + pos] == '0') end /= 2;
                else begin += mid;
            } 
            decode.push_back(begin - 1 + 'a');
        }
        for(int i = 0; i < decode.size(); i++) cout << decode[i];
        cout << endl;
    }

    return 0;
}