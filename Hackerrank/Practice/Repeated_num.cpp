#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n == 0) return 0;

    return n * fact(n - 1);
}
int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long sum = 0, product = 1, a;
        for(int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
            product *= a;
        }

        sum -= n * (n + 1) / 2;
        product /= fact(n);
        int sub = sqrt(sum * sum - 4 * product);
        cout << (sum + sub) / 2 << " " << (sum - sub) / 2 << endl;
    }

    return 0;
}