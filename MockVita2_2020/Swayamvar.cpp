#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    queue<char> brides;
    queue<char> grooms;
    for(int i = 0; i < n; i++)  brides.push(a[i]);
    for(int i = 0; i < n; i++)  grooms.push(b[i]);

    long unsigned int count = 0;
    while(grooms.size() != count) {
        if(brides.front() == grooms.front()) {
            brides.pop();
            grooms.pop();
            count = 0;      
        }

        else {
            char a = grooms.front();
            grooms.push(a);
            grooms.pop();
            count++;
        }
    }

    cout << brides.size();
    
}