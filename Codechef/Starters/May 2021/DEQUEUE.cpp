#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        deque<int> dq;
        int temp;
        for(int i = 0; i < m; i++) {
            cin >> temp;
            dq.push_back(temp);
        }
        vector<bool> check(n + 1, 0);
        int min_count = 0;
        for(int i = 0; i < m; i++) {
            if(!check[dq.front()]) {
                check[dq.front()] = 1;
                min_count++;
            }
            if (!check[dq.back()]) {
                check[dq.back()] = 1;
                min_count++;
            }
        }
        cout << min_count << endl;
    }

    return 0;
}