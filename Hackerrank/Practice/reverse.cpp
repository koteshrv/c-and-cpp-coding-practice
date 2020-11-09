#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(long long a[], int n)
{
    if(n == 0)  exit(0);
    if(n > 0) { 
        cout << a[n - 1] << " ";
        return reverse(a, n - 1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    reverse(a, n);
}
