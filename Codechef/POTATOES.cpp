#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2;i<=sqrt(num);i++){
          if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x,y;
        cin >> x >> y;
        for(int i=x+y+1;;i++){
            if(isPrime(i))  {
                cout << i-x-y << endl; 
                break;
            }
        }
    }
    return 0;
}