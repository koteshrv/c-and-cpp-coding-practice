#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,pos=1,i=0;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)    cin >> ar[i];
    while(pos<=n&&i<n){
        if(ar[i]==pos)  {
            cout << i+1 << " ";
            pos++;
            i=0;
        }
        else i++;
    }
    return 0;
}