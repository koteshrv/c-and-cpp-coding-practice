#include <bits/stdc++.h>
using namespace std;

void smaller_elements_to_the_left(int ar[], int n) {
    vector<int> res(n, -1);
    stack<int> st;
    res[0] = 1;
    st.push(0);
    for(int i = 1; i < n; i++) {
        while(!st.empty() && ar[i] >= ar[st.top()]) st.pop();
        res[i] = st.size() == 0 ? i + 1 : i - st.top();
        st.push(i);
    }
    for(int i = 0; i < n; i++) cout << res[i] << " "; 
    cout << endl;
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        smaller_elements_to_the_left(ar, n);
    }

    return 0;
}