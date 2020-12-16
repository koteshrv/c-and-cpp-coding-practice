#include <bits/stdc++.h>
using namespace std;

void insertionSort(int ar[], int n) {
    int key, j;
    for(int i = 1; i < n; i++) {
        key = ar[i];
        j = i - 1;
        while(j >= 0 && ar[j] > key) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;
        cout << j + 1 << " ";
    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        insertionSort(ar, n);
    }

    return 0;
}