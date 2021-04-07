#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d\n", &t);
    for(int i = 1; i <= t; i++) {
        printf("Case %d:\n", i);
        int n, x, _max;
        char q;
        stack<int> st, m;
        scanf("%d\n", &n);
        while(n--) {
            scanf("%c ", &q);
            if(q == 'A') {
                scanf("%d\n", &x);
                st.push(x);
                if(!m.empty()) {
                    _max = max(m.top(), x);
                    m.push(_max);
                } 
                else m.push(x);
            }
            else if(q == 'R' && !st.empty()) {
                st.pop();
                m.pop();
            }
            else if(q == 'Q') {
                if(!st.empty()) printf("%d\n", m.top());
                else {
                    printf("Empty\n");
                }
            }
        }
    }
    return 0;
}