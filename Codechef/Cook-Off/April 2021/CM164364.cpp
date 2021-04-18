#include <bits/stdc++.h>
using namespace std;

vector<int> countfreq(int ar[], int n) {
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[ar[i]]++;
    }
    vector<int> freq;
    for(auto i: mp) freq.push_back(i.second);
    return freq;
} 

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        vector<int> freq = countfreq(ar, n);
        sort(freq.begin(), freq.end(), greater<int>());
        for(int i = 0; i < n; i++) {
            if(freq[i] > 1) {
                if (x < freq[i] - 1){
                freq[i] -= x;
                x = 0;
                }
                else {
                    int a = freq[i] - 1;
                    freq[i] -= a;
                    x -= a;
                }
            }     
        }
        cout << freq.size() - x << endl;
    }

    return 0;
}

