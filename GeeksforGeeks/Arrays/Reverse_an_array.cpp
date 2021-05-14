#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, num;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
            cin >> num;
            vec[j] = num;
        }
        // reverse(vec.begin(), vec.end());
        for(int i = 0; i < n; i++) cout << vec[i] << " ";
        cout << endl;
    }

    return 0;
}