#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fair_number(long long num) {
    vector<int> ar;
    int number = num;
    while(num > 0) {
        ar.push_back(num % 10);
        num /= 10;
    }
    int flag = 0;
    for(int i = 0; i < ar.size(); i++) {
        if(ar[i] != 0) {
            if(number % ar[i] != 0) {
                flag = 1;  
                break;
            }
        }
    }

    return flag;
}
int main() {

    int t = 1;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        while(1) {
            if(fair_number(n) == 0)  {
                cout << n << endl;
                break;
            }
            else n++;
        }
    }

    return 0;
}