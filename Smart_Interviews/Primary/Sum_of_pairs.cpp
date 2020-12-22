#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> v, int sum) {
    int n=v.size();
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        int t=sum-v[i];
        if(s.find(t)!=s.end()) return true;
        s.insert(v[i]);
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin >>ar[i];
        if(isPresent(ar,k)) cout << "True" <<endl;
        else cout << "False" << endl;
    }
    return 0;
}
