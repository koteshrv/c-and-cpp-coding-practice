#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,count=1,max=0;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)    cin >> ar[i];
    for(int i=0;i<n-1;i++){
        if(ar[i]<=ar[i+1])  count++;
        else {
            if(max<count)   max=count;
            count=1;
        }
    }
    if(count>max)  max=count;
    cout << max;
    return 0;
}