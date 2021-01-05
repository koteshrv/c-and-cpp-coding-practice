#include <bits/stdc++.h> 
#include <vector>

using namespace std; 

int main() 
{ 
    int t; 
    vector<int> count_arr;
    vector<int> victim_count;
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n;
        int x[n];
        for(int i = 0; i < n; i++)
            cin >> x[i];
        
        int count = 1, max = 1, min = n;
        for(int i = 0; i < n - 1; i++){
            if(x[i+1] - x[i] < 3)
                count++;

            if((x[i + 1] - x[i] > 2) || (i + 2 == n)){
                if(count > max) 
                    max = count;
                if(count < min) 
                    min = count;

                count = 1;
            }

        if ((x[i + 1] - x[i] > 2) && (i + 2 == n)) 
            min = 1;

        }

        cout << min << " " << max << endl;

    } 

    return 0; 
}

