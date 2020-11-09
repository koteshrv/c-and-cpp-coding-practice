#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,rev=0;
    bool neg = false;
    cin >> n;
    if(n<0) {
        n=n*(-1);
        neg = true;
    }
    while(n>0) {
        rev=rev*10+n%10;
        n/=10;
    }
    cout << (neg?rev*(-1):rev);
    return 0;
}
