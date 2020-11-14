#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c[n];
    for(int i = 0; i < n; i++) cin >> c[i];
    int a=0,d=0;
    for(int i = 0; i < n; i++) {
        if(c[i]=='A')   a++;
        else d++;
    }
    if(a>d) cout << "Anton";
    else if(a<d) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
