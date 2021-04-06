#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d\n", &t);
    for(int i = 1; i <= t; i++) {
        printf("Case %d:\n", i);
        int n, x, _max = INT_MIN;
        char q;
        stack<int> st, m;
        scanf("%d\n", &n);
        while(n--) {
            scanf("%c ", &q);
            if(q == 'A') {
                scanf("%d\n", &x);
                st.push(x);
                _max = max(_max, x);
                m.push(_max);
            }
            else if(q == 'R' && !st.empty()) {
                if(st.top() == m.top()) m.pop();
                st.pop();
            }
            else if(q == 'Q') {
                if(!st.empty()) printf("%d\n", m.top());
                else {
                    printf("Empty\n");
                    _max = INT_MIN;
                }
            }
        }
    }
    return 0;
}