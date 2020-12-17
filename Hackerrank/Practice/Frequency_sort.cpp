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
        sort(ar, ar + n);
        int max = *max_element(ar, ar + n);
        int f[max + 1] = {0};
        for(int i = 0; i < n; i++)  f[ar[i]]++;
        int count = 0;
        vector<int> vec;
        for(int i = 0; i < max + 1; i++) 
            if(f[i] != 0)  {
                count++;
                vec.push_back(i);
            }
        int array[count][2];
        for(int i = 0; i < count; i++) {
            array[i][0] = vec[i];
            array[i][1] = f[i];
        }
        sort(array, a)
    }

    return 0;
}