#include <bits/stdc++.h>
using namespace std;

// Recursive method 
// O(n)
void reverse(int ar[], int start, int end) {
    if(start >= end)    return;

    int temp = ar[start];
    ar[start] = ar[end];
    ar[end] = temp;

    return reverse(ar, start + 1, end - 1);
}

// Iterative method
// O(n)
void reversearray(int ar[], int start, int end) {
    while(start < end) {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int ar[] = {1,2,3,4,5,6},n = 6;
    //reversearray(ar,0,5);
    reverse(ar,0,5);
    for(int i = 0; i < n; i++) cout << ar[i] << " ";
    cout << endl;
}