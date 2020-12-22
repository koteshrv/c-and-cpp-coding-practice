#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,s=100*101/2,sum=0;
    for(int i = 0; i < 99; i++){
        cin >> a;
        sum+=a;
    }
    cout<<s-sum;
    return 0;
}
