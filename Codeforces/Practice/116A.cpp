#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,pass=0,max=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        pass -= a;
        pass += b;
        if(max<pass)    max = pass;
    }
    cout << max;
    return 0;
}