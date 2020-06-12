#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        
        long long n = str.size();
        long long pairCount = 0;
        for(int i = 0; i < n; i++) {
            if(str[i] != str[i + 1]) {
                pairCount++;
                i++;
            }
        }
        
        cout << pairCount << "\n";
    }
    return 0;
}
