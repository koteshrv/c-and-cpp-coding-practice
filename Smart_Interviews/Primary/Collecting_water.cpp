#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        int ml[n], mr[n], ans = 0;
        ml[0] = ar[0];
        mr[n - 1] = ar[n - 1];
        for(int i = 1; i < n; i++) ml[i] = max(ml[i - 1], ar[i]);
        for(int i = n - 2; i >= 0; i--) mr[i] = max(mr[i + 1], ar[i]);
        for(int i = 0; i < n; i++) ans += (min(ml[i], mr[i]) - ar[i]);
        cout << ans << endl;
    }
    return 0;
}
