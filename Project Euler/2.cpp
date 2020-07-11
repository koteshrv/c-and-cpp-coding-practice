#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    unsigned long long i = 1, j = 2, k = 0;
    unsigned long long sum = 2;
    while(k < 4000000) {
        k = i + j;
        if(k % 2 == 0)  sum += k;
        i = j;
        j = k;
    }
    cout << sum << endl;
    return 0;
}