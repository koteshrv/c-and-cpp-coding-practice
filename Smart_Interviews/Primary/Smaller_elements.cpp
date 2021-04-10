#include <bits/stdc++.h>
using namespace std;

void smaller_elements_to_the_right(int ar[], int n) {
    vector<int> res(n, 0);
    stack<int> st;
    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && ar[i] < st.top()) st.pop();
        res[i] = st.size() == 0 ? 0 : st.size();
        st.push(ar[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) cout << res[i] << " "; cout << endl;
    /*sum += res[i]; 
    cout << sum << endl;
    */
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        smaller_elements_to_the_right(ar, n);
    }

    return 0;
}