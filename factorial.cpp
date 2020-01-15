#include <iostream>
#include <cmath>

using namespace std;

/*
    2 and 5 together result in a zero
    No of pairs of 2 and 5 is the required answer
    No. of 5's is always greater than No. of 2's
*/

int findTrailingZeros(int n) 
{  
    int count = 0; 
    while(n>0){
        n=n/5;
        count+=n;
    }
    return count; 
}

int main(){
    long long int t;
    cin >>t;
    for(int i=0;i<t;i++){
    long long int a;
    cin >>a;
    cout <<findTrailingZeros(a) <<endl;
    }
}