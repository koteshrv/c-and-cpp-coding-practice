#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n,fact = 1;
    cin >> n;
    for(int i = n; i > 0; i--)  fact*=i;
    cout<<fact;
    return 0;
}
