#include <bits/stdc++.h>
using namespace std;

int bitScore(int n) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    while(n > 0) {
        int rem = n % 10;
        mini = min(mini, rem);
        maxi = max(maxi, rem);
        n /= 10;
    }

    int score = (mini * 7) + (maxi * 11);

    return (score % 100) / 10;
}

int pairs(vector<int> n) {
    int l = n.size();
    vector<int> v1(10, 0);
    vector<int> v2(10, 0);
    for(int i = 0; i < l; i += 2) {
        v1[n[i]] += 1;
        v1[n[i]] = min(3, v1[n[i]]);
    }

    for(int i = 1; i < l; i += 2) {
        v2[n[i]] += 1;
        v2[n[i]] = min(3, v2[n[i]]);
    }

    for(int i = 0; i < 10; i++) {
        v1[i] = max(v1[i],v2[i]);
        if(v1[i] > 2)   v1[i] = 2;
        else if(v1[i] == 2) v1[i] = 1;
        else v1[i] = 0;
    }

    return accumulate(v1.begin(), v1.end(), 0);
}

int main() {
    int n;
    cin >> n;
    int a;
    vector<int> bitscores;
    for(int i = 0; i < n; i++)  {
        cin >> a;
        bitscores.push_back(bitScore(a));
    }

    int no_of_pairs = pairs(bitscores);

    cout << no_of_pairs;

    return 0;
}