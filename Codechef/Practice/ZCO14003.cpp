#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    long long maxRevenue = 0, temp = n;
    for(int i = 0; i < n; i++) {
        if(arr[i] * temp > maxRevenue)  maxRevenue = arr[i] * temp;
        temp--;
    }

    cout << maxRevenue << endl;

    return 0;
}