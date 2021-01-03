#include <bits/stdc++.h>
using namespace std;

vector<int> point(int x, int y, int n, int cw) {
    vector<int> p(2);
    if(cw == 0) {
        if(x == 0 || x == n) swap(x , y);
        else if(x > y) {
            y += (n - x);
            x = n;
        }
        else {
            y = n - x;
            x = 0;
        }
    }

    else {
        if(y == 0 || y == n) swap(x, y);
        else if(y > x) {
            x += n - y;
            y = n;
        } 
        else {
            x = n - y;
            y = 0;
        }
    }

    p[0] = x;
    p[1] = y;
    return p;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        k %= 4;
        int cw = 0;
        if(x < y) cw = 1;
        if(k == 0) k = 4;
        while(k--) {
            if(x == y) {
                x = n;
                y = n;
                break;
            }
            else {
                vector<int> p = point(x, y, n, cw);
                x = p[0];
                y = p[1];
            }    
        }

        cout << x << " " << y << endl;   
    }

    return 0;
}