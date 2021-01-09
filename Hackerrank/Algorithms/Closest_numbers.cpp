#include <bits/stdc++.h>
using namespace std;

void closestNumbers(int arr[], int n) {
    sort(arr, arr + n);
    int diff[n];
    adjacent_difference(arr, arr + n, diff);
    int min = *min_element(diff + 1, diff + n);
    for(int i = 1; i < n; i++) 
        if(diff[i] == min) cout << arr[i - 1] << " " << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    closestNumbers(arr, n);
    return 0;
}

