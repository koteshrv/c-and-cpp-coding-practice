#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double a,orange=0;
    for(int i=0;i<n;i++){
        cin >> a;
        orange+=a;
    }
    cout << orange/n;
    return 0;
}