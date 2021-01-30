#include <bits/stdc++.h>
using namespace std;

int middle(int a, int b, int c) {
    int Max = max(max(a, b), c);
    int Min = min(min(a, b), c);
    int median = a ^ b ^ c ^ Max ^ Min;
    return median;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << middle(a, b, c) << endl;
    }

    return 0;
}