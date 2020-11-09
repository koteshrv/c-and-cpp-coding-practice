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
    while(n > 0) {
        sum += pow(n%10,3);
        n/=10;
    }
    cout << (sum==num?"Yes":"No");
    return 0;
}
