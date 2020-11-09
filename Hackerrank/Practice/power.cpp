#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b;
    cin >> a >> b;
    cout << power(a,b);
    return 0;
}
