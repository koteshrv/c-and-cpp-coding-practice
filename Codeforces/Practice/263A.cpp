#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,a=0,moves=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a;
            if(a==1){
                x = i+1;
                y = j+1;
            }
        }
    }
    if(x>3) moves = x-3;
    if (x<3) moves = 3-x;
    if(y>3) moves+= y-3;
    if (y<3) moves+= 3-y;
    cout << moves;
    return 0;
}