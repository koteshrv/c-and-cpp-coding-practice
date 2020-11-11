#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    long long candies[n],no=0;
    candies[0]=1;
    for(int i = 1; i < n; i++) {
        if(arr[i]>arr[i-1])   candies[i]=candies[i-1]+1;
        else candies[i]=1; 
    }

    for(int i = n-1; i >=0 ; i--) {
        if (arr[i-1] > arr[i] && candies[i] >= candies[i-1])
            candies[i-1] = candies[i]+1;
    }
    for(int i = 0; i < n; i++)  no+=candies[i];
    
    return no;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
