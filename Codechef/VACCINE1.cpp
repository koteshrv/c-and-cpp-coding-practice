#include <bits/stdc++.h>
using namespace std;

int main() {
    float d1,d2,v1,v2,p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    int days;
    if(d1 == d2 && d1 == 1)  days = ceil(p / (v1 + v2));
    else if(d1 == d2) days =  d1 + ceil(p / (v1 + v2));
    else {
        int min_day = min(d1, d2), max_day = max(d1, d2);
        int v = d1 > d2 ? v2 : v1, vaccines = 0, i;
        for(i = min_day; i < max_day; i++) {
            vaccines += v;
            if(vaccines >= p)   {
                cout << i << endl;
                return 0;
            }
        }
        p -= vaccines;
        days = i - 1 + ceil(p / (v1 + v2));
    }
    cout << days << endl;
    return 0;
}