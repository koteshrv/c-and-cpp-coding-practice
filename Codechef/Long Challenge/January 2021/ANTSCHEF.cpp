#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        vector<long long> m(n);
        vector<vector<long long>> x(n, vector<long long> (1));
        for(long long i = 0; i < n; i++) {
            cin >> m[i];
            for(long long j = 0; j < m[i]; j++) {
                x[i].resize(m[i]);
                cin >> x[i][j];
            }
        }
        long long neg = 0, pos = 0, count = 0;
        for(long long i = 0; i < n; i++) {
            for(long long j = 0; j < m[i]; j++) {
                if(x[i][j] < 0) neg++;
                else pos++;
            }
        }
        count = neg * pos;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m[i]; j++) {
                if(x[i][j] == 0) count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}