#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n,m,a;
    cin >> n >> m >> a;
    int max = (n>m?n:m),ans;
    if(a>=max) cout << 1;
    else    cout << (max%a*a);
    return 0;
}