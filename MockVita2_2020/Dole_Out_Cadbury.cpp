#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q, r, s;
    cin >> p;
    cin >> q;
    cin >> r;
    cin >> s;
    int ar, count = 0;
    for(int i = p; i <= q; i++) {
        for(int j = r; j <= s; j++) {
            ar = i * j;
            int x = i, y = j;
            while(ar > 0) {
                int m = min(x, y);
                int a = m * m;
                ar -= a;
                if(m == x)  y -= x;
                else    x -= y;
                //cout << a << " ";
                count++;
            }
        }
    }
    //cout << endl;
    cout << count;
    return 0;
}