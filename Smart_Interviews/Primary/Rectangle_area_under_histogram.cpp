#include <bits/stdc++.h>
using namespace std;

vector<int> smaller_elements_to_the_right(int ar[], int n) {
    vector<int> res(n, n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && ar[i] <= ar[st.top()]) st.pop();
        res[i] = st.size() == 0 ? n : st.top();
        st.push(i);
    }
    //for(int i = 0; i < n; i++) cout << res[i] << " "; cout << endl;
    return res;
}

vector<int> smaller_elements_to_the_left(int ar[], int n) {
    vector<int> res(n, -1);
    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && ar[i] <= ar[st.top()]) st.pop();
        res[i] = st.size() == 0 ? -1 : st.top();
        st.push(i);
    }
    //for(int i = 0; i < n; i++) cout << res[i] << " "; cout << endl;
    return res;
}

int max_area(int ar[], int n) {
    vector<int> p2 = smaller_elements_to_the_right(ar, n);
    vector<int> p1 = smaller_elements_to_the_left(ar, n);
    int _max = INT_MIN;
    for(int i = 0; i < n; i++) {
        _max = max(_max, ((p2[i] - p1[i] - 1) * ar[i]));
    }
    return _max;
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        cout << max_area(ar, n) << endl;
    }

    return 0;
}

// 2 1 4 7 5 2 1 3 4 5 6 4 3 2 3 1 6 7 5 2