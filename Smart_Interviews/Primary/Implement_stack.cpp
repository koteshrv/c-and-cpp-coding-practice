#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;
    int ar[10000], top = -1;

    while(t--) {
        string q, num;
        cin >> q;
        if(q == "push") {
            cin >> num;
            ar[++top] = stoi(num);
        }
        else if(q == "pop"){
            if(top > -1) cout << ar[top--] << endl;
            else if(top == -1) cout << "Empty" << endl;
        }
            
    }

    return 0;
}