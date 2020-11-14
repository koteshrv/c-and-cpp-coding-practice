#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0,k=5;
    cin >> n;
    while(n>0){
        if(n>=k) {
            n-=k;
            count++;
        }
        else k--;
    }
    cout << count;
    return 0;
}