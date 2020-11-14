#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x,y,z,X=0,Y=0,Z=0;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        X+=x;
        Y+=y;
        Z+=Z;
    }
    if(X==0&&Y==0&&Z==0)    cout << "YES";
    else cout << "NO";
    return 0;
}