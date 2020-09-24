#include <bits/stdc++.h>
using namespace std;

int compute() {
    int n;
    cin >> n;
    long long a[n], count = 0;
    for (int i = 0; i < n ; i++)    cin >> a[i];
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] & a[j]) >= (a[i] ^ a[j])) count++;
        }
    }

    cout << count << endl;

    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        compute();
    }
    return 0;
}