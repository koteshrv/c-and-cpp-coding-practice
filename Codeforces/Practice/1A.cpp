#include <bits/stdc++.h>
using namespace std;

int main() {
    double n,m,a;
    cin >> n >> m >> a;
    if(a==1) cout << (long long)(n*m);
    else cout << (long long)ceil((float)n/a) * (long long)ceil((float)m/a) << endl;
    return 0;
}