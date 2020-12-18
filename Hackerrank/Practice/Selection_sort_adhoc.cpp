#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        int minIndex;
        for(int i = 0; i < n - 1; i++) {
            minIndex = i;
            for(int j = i + 1; j < n; j++) 
                if(ar[j] < ar[minIndex])    minIndex = j;
            swap(ar[minIndex], ar[i]);
            cout << minIndex << " ";
        }
        cout << endl;
    }

    return 0;
}