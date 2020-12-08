#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        float n, d;
        cin >> n >> d;
        int a, people_at_risk = 0, people_not_at_risk = 0, days = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a >= 80 || a <= 9) people_at_risk += 1;
            else people_not_at_risk += 1;
        }
        cout << ceil(people_at_risk / d) + ceil(people_not_at_risk / d) << endl;
    }
    return 0;
}