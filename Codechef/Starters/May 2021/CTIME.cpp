#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;

    // n = inv count , k = time to google, f = tot time
    while(t--) {
        int n, k, f;
        cin >> n >> k >> f;
        vector<pair<long long, long long>> start_end;
        int start, end;
        for(int i = 0; i < n; i++) {
            cin >> start >> end;
            start_end.push_back(make_pair(start, end));
        }
        sort(start_end.begin(), start_end.end());
        long long googled_time = start_end[0].first, prev_time = start_end[0].second;
        for(int i = 1; i < start_end.size(); i++) {
            if(start_end[i].first > prev_time) 
                googled_time += (start_end[i].first - prev_time);
            prev_time = max(prev_time, start_end[i].second); 
        }
        googled_time += (f - prev_time);
        cout << (googled_time >= k ? "YES" : "NO") << endl;
    }

    return 0;
}