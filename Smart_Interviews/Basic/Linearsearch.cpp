#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,key;
    cin >> n >> key;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    for(int i = 0; i < n; i++) {
        if(ar[i]==key)  {
            cout << i;
            exit(0);
        }
    }
    cout << -1;
    return 0;
}
