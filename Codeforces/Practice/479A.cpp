#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a<b;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int d,e,f,g,h;
    d=a+(b*c);
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;
    cout << max({d,e,f,g,h},comp);
}