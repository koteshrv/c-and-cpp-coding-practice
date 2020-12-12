#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long a_x1, a_y1, a_x2, a_y2;
        cin >> a_x1 >> a_y1 >> a_x2 >> a_y2;
        long long b_x1, b_y1, b_x2, b_y2;
        cin >> b_x1 >> b_y1 >> b_x2 >> b_y2;
        long long area = (a_x2 - a_x1) * (a_y2 - a_y1) + (b_x2 - b_x1) * (b_y2 - b_y1);
        long long x, y;
        x = min(a_x2, b_x2) - max(a_x1, b_x1);
        y = min(a_y2, b_y2) - max(a_y1, b_y1);
        long long overlapped_area = 0;
        if(x > 0 && y > 0)  overlapped_area = x * y; 
        cout << area - overlapped_area << endl;
    }

    return 0;
}