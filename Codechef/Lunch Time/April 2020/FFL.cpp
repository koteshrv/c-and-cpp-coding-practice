#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int t; 
    cin >> t; 
    while(t--){ 
        int n,s,flag = 0;
        cin >> n >> s;
        int p[n],player[n];
        for(int i = 0; i < n; i++)
            cin >> p[i]; 
        for(int i = 0; i < n; i++)
            cin >> player[i];

        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                if(player[i] == 0 && player[j] == 1){
                    if(p[i] + p[j] == 100 - s)
                        flag = 1;
                }

                if(player[j] == 0 && player[i] == 1){
                    if(p[i] + p[j] == 100 - s)
                        flag = 1;
                }
            }
        }
        if(flag == 1)  cout << "yes" <<endl;
        else  cout << "no" <<endl;
        
    } 
    return 0; 
}

