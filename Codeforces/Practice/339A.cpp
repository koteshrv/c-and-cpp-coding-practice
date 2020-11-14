#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.size();
    if(n==1)    cout << s;
    else {
        int num = n-n/2,j=0;
        int ar[num];
        for(int i = 0;i < n; i+=2){
            ar[j]=s[i]-'0';
            j++;
        }
        sort(ar,ar+num);
        j=0;
        for(int i = 0; i < n; i++){
            if(i%2!=0&&i!=0)    cout << "+";
            else {
                cout << ar[j];
                j++;
            }
        }
    }
    return 0;
}