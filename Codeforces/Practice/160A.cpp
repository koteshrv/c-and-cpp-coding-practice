#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0,count=0,firstSum=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)  {
        cin >> a[i];
        sum+=a[i];
    }
    sum/=2;
    sort(a.begin(),a.end(),greater<int>());
    for(int i = 0; i < n;i++){
        firstSum+=a[i];
        count++;
        if(firstSum>sum)    break;
    }
    cout << count;
    return 0;
}