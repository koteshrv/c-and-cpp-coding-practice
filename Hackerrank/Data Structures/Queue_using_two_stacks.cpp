#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int> f, r;
    int t;
    cin >> t;
    while(t--) {
        int op, n;
        cin >> op;
        if(op == 1) {
            cin >> n;
            r.push(n);
        }
        else {
            if(f.empty()) {
                while(!r.empty()) {
                    f.push(r.top());
                    r.pop();
                }
            }
            if(!f.empty()) {
                if(op == 2) f.pop();
                else cout << f.top() << endl;
            }
        }
    }
    return 0;
}
