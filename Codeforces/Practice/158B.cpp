#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0;i<n;i++)    cin >> num[i];
    sort(num.begin(),num.end(),greater<int>());
    int count=0,cars=0;
    for(int i=0;i<n;i++){
        count=num[i]+num[n-1];
        if(count<=4){
            cars++;
            n--;
            while(count+num[n-1]<=4){
                n--;
                count+=num[n-1];
            }
        }
        else cars++;
    }
    cout << cars;
    return 0;
}