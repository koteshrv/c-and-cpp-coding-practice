#include <bits/stdc++.h> 
#include <vector>

using namespace std; 

int main() 
{ 
    int t; 
    vector<int> count_arr;
    cin >> t; 
    while(t--){ 
        int n,distance,count = 0,flag = 0,f = 0,k = 0,a = 0;
        vector<int> count_arr;
        
        cin >> n;
        int A[n];
        for(int i=0;i<n;i++){
            cin >> A[i];
            if(A[i] == 1)
                a++;
        }

        if(a == 1)
            cout << "YES" << "\n";
            
        else{
            for(int i=0;i<n;i++){
                if(A[i] == 1 && flag == 0){
                    flag = 1;
                    k = 1;
                }

                if(A[i] == 0 && flag == 1){
                    count++;
                    f = 1;
                    k = 0;
                }

                if(A[i] == 1 && (f == 1 && k == 0) || (k == 1)){
                    count_arr.push_back(count);
                    count = 0;
                }
            }
        
        
            for(int i=0;i<count_arr.size();i++){
                if(count_arr[i] < 5){
                    cout << "NO" << "\n";
                    f = 0;
                    break;
                }
            }
        
            if(f == 1)
                cout << "YES" << "\n";
        }
        
    } 
    return 0; 
}

