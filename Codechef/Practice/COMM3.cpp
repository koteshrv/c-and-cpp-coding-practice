#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        int x1,x2,x3,y1,y2,y3,count=0;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        double d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        double d2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        double d3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
        if((d1<=r&&d2<=r)||(d2<=r&&d3<=r)||(d3<=r&&d1<=r))  cout << "yes" <<endl;
        else cout << "no" <<endl;
    }
    return 0;
}