#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m,x,y,cops;
        cin >> m >> x >> y;
        vector<int> vec(100,0);
        for(int i=0;i<m;i++){
            cin >> cops;
            for(int j=cops-1-(x*y);j<=cops-1+(x*y);j++) {
                if(j>=0&&j<=99) vec[j]=1;
            }
        }
        int ans=accumulate(vec.begin(),vec.end(),0);
        cout << 100-ans << endl;
    }
    return 0;
}