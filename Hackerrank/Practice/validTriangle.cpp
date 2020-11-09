#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c;
    cin >> a >> b >> c;
    cout << ((a<b+c&&b<a+c&&c<a+b)?"Yes":"No");
    return 0;
}
