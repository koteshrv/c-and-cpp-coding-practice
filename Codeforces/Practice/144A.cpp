#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)    cin >> ar[i];
    int max=0,min=101,maxindex,minindex;
    for(int i=0;i<n;i++) {
        if(ar[i]>max) {
            max=ar[i];
            maxindex=i;
        }
        if(ar[i]<=min){
            min=ar[i];
            minindex=i;
        }
    }
    if(maxindex>minindex)   minindex++;
    cout << maxindex+n-1-minindex;
    return 0;
}