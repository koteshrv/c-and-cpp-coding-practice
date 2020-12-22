#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char src, char temp, char dest) {
    if(n == 0)  return;
    tower_of_hanoi(n - 1, src, dest, temp);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    tower_of_hanoi(n - 1, temp, src, dest);
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cout << pow(2, n) - 1 << endl; // Minimum number of moves formula for tower of hanoi
        tower_of_hanoi(n, 'A', 'B', 'C');
    }

    return 0;
}