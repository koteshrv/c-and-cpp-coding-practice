#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long s = 0;
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long a[n], b[n];
        for(int i = 0; i < n; i++)  cin >> a[i] >> b[i];
        int scoreA = 0, scoreB = 0;

        for(int i = 0; i < n; i++) {
            //cout << "power" << sum(a[i]) << "  " << sum(b[i]) << endl;
            if(sum(a[i]) > sum(b[i]))   scoreA++;
            else if(sum(a[i]) < sum(b[i]))  scoreB++;
            else {
                scoreA++;
                scoreB++;
            }
        }

        //cout << "scores" << scoreA << " " <<scoreB << endl;
        if(scoreA > scoreB) cout << 0 << " " << scoreA << endl;
        else if(scoreA < scoreB) cout << 1 << " " << scoreB << endl;
        else cout << 2 << " " << scoreA << endl;

    }

    return 0;   
}