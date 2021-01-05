#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0, extra_digits = 0, flag = 1, op = 0, digit = 2, set_count = 0;
        for(int i = 0; i < n; i++)  {
            set_count = 0;
            if(s[i] == '2' && digit == 2) {
                count++;
                digit = 0;
                set_count = 1;
            }

            if(s[i] == '0' && digit == 0) {
                count++;
                digit = 2;
                set_count = 1;
            }
            if(count > 0 && ((digit == 2 && s[i] != '2') || (digit == 0 && s[i] != '0')) && set_count == 0)   extra_digits++;
            if((count == 4 && i == n - 1) || (count == 4 && extra_digits == 0))    {
                cout << "Yes" << endl;
                flag = 0;
                break;
            }
            if(count == 4 && i != n - 1 && (extra_digits > 0) && op == 0) {
                if(s[i] == '0' && s[i - 1] == '2')  count = 2;
                else count = 0;
                op = 1;
            }
        }
        if(flag)    cout << "No" << endl;
    }

    return 0;
}