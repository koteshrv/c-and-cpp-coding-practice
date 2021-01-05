#include <bits/stdc++.h> 

using namespace std; 

const unsigned int M = 1000000007;  

int main() 
{ 
    int t; 
    cin >> t; 
    while(t--){ 
        long long int n;
        unsigned long long int max_profit=0;
        cin >> n;
        long long int p[n];
        for(int i=0;i<n;i++)
            cin >> p[i];

        sort(p, p+n);
        
        int x = 0, flag = 0;
        unsigned long long int temp;

        for(int i=n-1;i>=0;i--){
            if(p[i] - x < 0)
                break;
            
            else{
                temp = p[i] - x;
                max_profit = (max_profit + temp) % M;
            }

            x++;    
        }

        cout << max_profit << "\n";

        
    } 
    return 0; 
}

