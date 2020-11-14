#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int islucky(int n){
    vector<int> ar;
    while(n>0){
        ar.push_back(n%10);
        n/=10;
    }
    int k=ar.size(),count=0;
    for(int i = 0; i < k;i++){
        if(ar[i]==4||ar[i]==7)  count++;
    }
    if(count==k)    return 1;
    return 0;
}

int main() {
    int n;
    cin >> n;
    if(islucky(n))  {cout << "YES"; exit(0);}
    for(int i = 4;i<=n/2;i++){
        if(n%i==0){
            if(islucky(i))  {cout << "YES"; exit(0);}
        }
    }
    cout << "NO";
    return 0;
}