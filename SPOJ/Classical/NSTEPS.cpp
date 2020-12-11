#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int x , y;
        cin >> x >> y;
        if(x % 2 != 0 && y % 2 != 0 && (x - y == 2 || x == y))    cout << x + y - 1 << endl;
        else if (x - y == 2 || x == y)  cout << x + y << endl;
        else cout << "No Number" << endl;
    }

    return 0;
}