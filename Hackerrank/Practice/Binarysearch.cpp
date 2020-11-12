#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int ar[], int start, int end, int key) {
    while(start<=end){ 
        int mid = start+(end-start)/2; 

        if(ar[mid]==key) return mid;
        if(ar[mid]<key) start=mid+1;
        else end=mid-1; 
    } 

    return -1; 
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,key;
    cin >> n >> key;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    int start = 0, end = n -1;
    int ans = binarysearch(ar,start,end,key); 
    if(ans==-1) cout << "false";
    else cout << "true";
    return 0;
}
