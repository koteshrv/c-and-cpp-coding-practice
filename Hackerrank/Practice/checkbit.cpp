#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, i;
    cin >> n >> i;
    cout << ((n & (1 << (i - 1)))?"true":"false");
    return 0;
}
