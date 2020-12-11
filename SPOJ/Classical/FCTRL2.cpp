#include <bits/stdc++.h>
using namespace std;

int multiply(int x, int num[], int size) {
    int carry = 0;
    for(int i = 0; i < size; i++) {
        int product = num[i] * x + carry;
        num[i] = product % 10;
        carry = product / 10;
    }

    while(carry) {
        num[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}

void factorial(int n) {
    int num[200];
    num[0] = 1;
    int size = 1;

    for(int i = 2; i <= n; i++) size = multiply(i, num, size);

    for(int i = size - 1; i >= 0; i--) cout << num[i];
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}