#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    char ar1[n + 1], ar2[m + 1];
    strcpy(ar1, a.c_str());
    strcpy(ar2, b.c_str());
    for(int i = 0; i < m - 1; i++) {
        vector<int> v;
        for(int j = i; j < m; j++) v.push_back(0);
        for(int k = 0; k < n; k++) {
            for(int l = 0; l < m; l++) {
                int o = 0;
                
            }
        }
    }
    
    return 0;
}