#include <bits/stdc++.h>
using namespace std;

void pairs(int a[], int n) {
    // maxValue of the array
    int maxValue = 0;
    for(int i = 0; i < n; i++)  maxValue = max(maxValue, a[i]);
    // Frequencies of the values in the array
    int fre[maxValue + 1] = {0};
    for(int i = 0; i < n; i++)  fre[a[i]]++;

    int count = 0;

    // Case 1: 0, 0, 0
    // No of ways is fre[0]C3 = fre[0]! / (fre[0] - 3)! * 3!
    // nCr = n! / (n - r)! * r!
    // n! = n(n - 1)!
    count += fre[0] * (fre[0] - 1) * (fre[0] - 2) / 6;

    // Case 2: 0, x, x
    for(int i = 1; i <= maxValue; i++)
        count += fre[0] * fre[i] * (fre[i] - 1) / 2;

    // Case 3: x, x, 2*x
    for(int i = 1; 2 * i <= maxValue; i++)
        count += fre[i] * (fre[i] - 1) / 2 * fre[2 * i];
        //cout << "check" << count << endl;

    // Case 4: x, y, x + y
    for(int i = 1; i <= maxValue; i++) {
        for(int j = i + 1; i + j <= maxValue; j++)
            count += fre[i] * fre[j] * fre[i + j];
    }
    if(count > 0)   cout << count << endl;
    else cout << -1 << endl;
}

int main() {
	//code
	int t;
	cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        pairs(a, n);
    }
	return 0;
}