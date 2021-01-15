#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> ar, int n) {
    int key, j, count = 0;
    for(int i = 1; i < n; i++) {
        key = ar[i];
        j = i - 1;
        while(j >= 0 && ar[j] > key) {
            ar[j + 1] = ar[j];
            j--;
            count++;
        }
        ar[j + 1] = key;
    }
    cout << count << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++)  cin >> ar[i];
        insertionSort(ar, n);
    }

    return 0;
}