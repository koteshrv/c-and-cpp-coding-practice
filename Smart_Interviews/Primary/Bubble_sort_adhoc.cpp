#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int ar[], int n) {
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j + 1]);
                count++;
            } 
        }
    }
    return count;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        int swaps = bubbleSort(ar, n);
        cout << swaps << endl;
    }

    return 0;
}