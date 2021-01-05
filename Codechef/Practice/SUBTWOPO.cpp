#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
}

int main() {
	int n;
    cin >>n;
    int a;
    for(int i=0;i<n;i++){
        cin >>a;
    if(isPowerOfTwo(a)){
        cout <<"1" <<endl;
        return 0;
    }
    }
    cout <<"0" <<endl;
	return 0;
}
