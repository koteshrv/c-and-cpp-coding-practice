#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,a;
    cin >> n;
    a=n;n/=2;
    if(a%2!=0)  cout << (long long)(n*(n+1))-((n+1)*(n+1));
    else cout << (long long)(n*(n+1)-n*n);
}