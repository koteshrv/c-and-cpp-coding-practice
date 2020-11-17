#include <bits/stdc++.h>
using namespace std;

int beautifulyear(int n){
    int a[10]={0},count=0;
    while(n>0){
        a[n%10]++;
        n/=10;
    }
    for(int i=0;i<10;i++)   if(a[i]==1) count++;
    if(count==4)    return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    n++;
    while(1){
        if(beautifulyear(n))    {
            cout << n;
            break;
        }
        else n++;
    }
    return 0;
}