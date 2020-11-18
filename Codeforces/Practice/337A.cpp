#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int ar[b];
    for(int i=0;i<b;i++)    cin >> ar[i];
    sort(ar,ar+b);
    int min=ar[a-1]-ar[0];
    for(int i=0;i<=b-a;i++){
        if(ar[i+a-1]-ar[i]<min)  min=ar[i+a-1]-ar[i];
    }
    cout << min;
    return 0;
}