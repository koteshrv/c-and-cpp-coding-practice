#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long sum = 0, k;
    for(int i = 0; i < n; i++) {
        cin >> k;
        sum = (sum + k + 1000000007) % 1000000007;
    }
    int q, query;
    cin >> q;
    long long s = sum;
    for(int i = 0; i < q; i++) {
        cin >> query;
        s = ((s % 1000000007) * 2) % 1000000007;
        cout << s << endl;
    }

    return 0;
}