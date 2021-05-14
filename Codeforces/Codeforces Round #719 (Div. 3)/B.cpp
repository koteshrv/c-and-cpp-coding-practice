#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int count = floor(log10(n) + 1);
        int num = 0;
        for(int i = 0; i < count; i++) num += pow(10, i);
        int res = ((count - 1) * 9) + (n / num);
        cout << res << endl;
    }

    return 0;
}