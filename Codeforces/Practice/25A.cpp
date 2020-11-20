#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a,e=0,i1,i2;
    for(int i=1;i<n+1;i++) {
        cin >> a;
        if(a%2==0)  {
            e++;
            i1=i;
        }
        else {
            e--;
            i2=i;
        }
    }  
    cout << (e>0?i2:i1);
}