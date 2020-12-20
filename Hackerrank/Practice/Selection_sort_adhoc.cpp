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
        int maxIndex;
        for(int i = n - 1; i > 0; i--) {
            maxIndex = i;
            for(int j = 0; j < i; j++) 
                if(ar[j] > ar[maxIndex])    maxIndex = j;
            swap(ar[maxIndex], ar[i]);
            cout << maxIndex << " ";
        }
        cout << endl;
    }

    return 0;
}