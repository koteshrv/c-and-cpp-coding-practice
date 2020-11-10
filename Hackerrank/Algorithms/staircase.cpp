#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int pos = n - 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < pos; j++) {
            cout << " ";
        }
        for(int j = pos; j < n; j++) {
            cout << "#";
        }
        cout << endl;
        pos--;
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
