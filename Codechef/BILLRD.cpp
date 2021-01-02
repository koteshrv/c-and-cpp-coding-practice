#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int collision = 0;
        int direction = 1;
        while(collision < k) {
            if((x == 0 && y == 0) || (x == 0 && y == n) || (x == n && y == 0) || (x == n && y == n)) break;
            if(direction == 1) {
                y = n - x + y;
                x = n;
                direction = 2;
            }
            else if(direction == 2 || direction == 4) {
                swap(x, y);
                if(direction == 2) direction++;
                else direction = 1;
            }
            else if(direction == 3) {
                y = n - x;
                x = 0;
                direction = 4;
            }
            collision++;
        }
        cout << x << " " << y << endl;   
    }

    return 0;
}