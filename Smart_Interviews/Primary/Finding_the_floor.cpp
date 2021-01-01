#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++) cin >> ar[i];
    sort(ar.begin(), ar.end());
    int q;
    cin >> q;
    int query;
    for(int i = 0; i < q; i++) {
        cin >> query;
        vector<int>::iterator lb =  lower_bound(ar.begin(), ar.end(), query);
        int index = lb - ar.begin();
        while(ar[index] > query && index > 0) index--;
        if(ar[index] > query) cout << INT_MIN << endl;
        else cout << ar[index] << endl;
    }
    return 0;
}