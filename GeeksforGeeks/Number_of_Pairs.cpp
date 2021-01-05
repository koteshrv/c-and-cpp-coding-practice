#include <bits/stdc++.h>
using namespace std;

int count(int x, int Y[], int n, int NoOfY[]) {
    // If x == 0 then there cannot be any value in Y such that 
    // x ^ Y[i] > Y[i] ^ x
    if(x == 0)  return 0;

    // If x == 1 then the number of pairs is equal to number of
    // zeros in Y[]
    if(x == 1)  return NoOfY[0];

    // Find the number of elements in Y[] with values greater than X 
    // upper_bound() gets the address of the first greater element in 
    // Y[0......n - 1]
    int *index = upper_bound(Y, Y + n, x);
    int ans = (Y + n) - index;

    // If we reached here, then x must be greater than 1,
    // increase number of pairs for y = 0 and  y = 1
    ans += (NoOfY[0] + NoOfY[1]);

    // Decrease number of pairs for x = 2 and (y = 3 or y = 4)
    if(x == 2)  ans -= (NoOfY[3] + NoOfY[4]);

    // Increase number of pairs for x = 3 and y = 2
    if(x == 3)  ans += NoOfY[2];

    return ans;
}

// Function to count number of pairs
long long countPairs(int X[], int Y[], int m, int n) {
    // To store count of 0, 1, 2, 3, 4 in Y[]
    int NoOfY[5] = {0};
    for(int i = 0; i < n; i++) {
        if(Y[i] < 5)    NoOfY[Y[i]]++;
    }

    // Sort Y
    sort(Y, Y + n);

    long long totPairs = 0;
    for(int i = 0; i < m; i++)  totPairs += count(X[i], Y, n, NoOfY);

    return totPairs;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n], zeros = 0;
        for(int i = 0; i < m; i++)  cin >> X[i];
        for(int i = 0; i < n; i++)  cin >> Y[i];
        cout << countPairs(X, Y, m, n) << endl;  
    }
    return 0;
}