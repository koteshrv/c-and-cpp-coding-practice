#include <bits/stdc++.h> 
using namespace std;

 
int main() 
{ 
    int t; 
    cin >> t; 
    while(t--){ 
        long long int n,k;
        cin >> n >> k;
        long long int a[n],sorted[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sorted[i] = a[i];
        }
        sort(sorted, sorted + n);
        for(int i = 0; i < n; i++){
            if(a[i] == sorted[i])
                continue;
            swap(a[i], a[i+k]);
        }
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != sorted[i]){
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    } 
    return 0; 
}

