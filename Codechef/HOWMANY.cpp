#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    if(count == 1)   cout << "1" << endl;
    else if(count == 2) cout << "2" << endl;
    else if(count == 3)  cout << "3" << endl;
    else cout << "More than 3 digits" << endl;

    return 0;
}