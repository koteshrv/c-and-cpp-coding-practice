#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> vec(n,0);
    for(int i=0;i<k;i++)  {
        string s;
        int a;
        cin >> s;
        if(s=="CLOSEALL")   for(int i=0;i<n;i++)  vec[i]=0;
        else {
            cin >> a;
            a--;
            if(vec[a])  vec[a]=0;
            else vec[a]=1;    
        }
        cout << count(vec.begin(),vec.end(),1) << endl;
    }
    return 0;
}