#include <bits/stdc++.h>
#include <math.h> 
using namespace std; 

bool checkValidity(long long int a,long long int b,long long int c) 
{  
    if (a + b <= c || a + c <= b || b + c <= a) 
        return false; 
    else
        return true; 
}

int main() 
{ 
    int t; 
    cin >> t; 
    while(t--){ 
        long long int a,b,c,d,x,y,z,flag = 0;
        cin >> a >> b >> c >> d;
        
        x = b;
        y = c;
        
        for(z = c; z <= d; z++){
            if (checkValidity(x, y, z)){
                cout << x << " " << y << " " << z <<endl;
                flag = 1;
                break;
            }
        }
        
        x = ceil((a + b )/ 2);
        y = ceil((b + c )/ 2);

        if(flag == 0){
            for(z = c; z <= d; z++){
                if (checkValidity(x, y, z)){
                    cout << x << " " << y << " " << z <<endl;
                    break;
                }
            }
        }

    } 
    return 0; 
}

