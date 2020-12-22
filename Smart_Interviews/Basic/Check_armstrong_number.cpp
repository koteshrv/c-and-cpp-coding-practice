#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n,sum=0,num;
    cin >> n;
    num = n;
    int l = floor(log10(n) + 1);
    while(n > 0) {
        sum += pow(n%10,l);
        n/=10;
    }
    cout << (sum==num?"Yes":"No");
    return 0;
}
