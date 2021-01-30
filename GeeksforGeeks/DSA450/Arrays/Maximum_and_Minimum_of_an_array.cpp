#include <bits/stdc++.h>
using namespace std;

/*
Time complexity: O(n)
Space complexity : O(1)
*/

struct Pair {
    int min;
    int max;
};

// Simple linear search
struct Pair getMinMax(int ar[], int n) {
    struct Pair minmax;
    minmax.min = INT_MAX;
    minmax.max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(ar[i] < minmax.min) minmax.min = ar[i];
        else if(ar[i] > minmax.max) minmax.max = ar[i];
    }
    return minmax;
}

/*
Time complexity: O(n)
Algorithmic Paradigm: Divide and Conquer
*/

// Tournament method
struct Pair get_min_max(int ar[], int low, int high) {
    struct Pair minmax, minmaxL, minmaxR;

    // IF there is only one element in the array
    if(low == high) {
        minmax.min = ar[0];
        minmax.max = ar[1];
        return minmax;
    }

    // If there are only two elements in the array
    if(low == high + 1) {
        minmax.min = (ar[0] > ar[1] ? ar[1] : ar[0]); 
        minmax.max = (ar[0] > ar[1] ? ar[0] : ar[1]);
        return minmax;
    }

    // If there are more than two elements in the array
    int mid = (high + low) / 2;
    minmaxL = get_min_max(ar, low, mid);
    minmaxR = get_min_max(ar, mid + 1, high);
    minmax.max = minmaxL.max > minmaxR.max ? minmaxL.max : minmaxR.max;
    minmax.min = minmaxL.min > minmaxR.min ? minmaxR.min : minmaxL.min;
    return minmax;
}

/*
Time complexity: O(n)
Total number of comparisons: Different for even and odd n, see below: 

If n is odd:    3*(n-1)/2  
If n is even:   1 Initial comparison for initializing min and max, and 3(n-2)/2 comparisons for rest of the elements  
                =  1 + 3*(n-2)/2 = 3n/2 -2

Tournament method and compare in pairs approaches make the equal number of comparisons when n is a power of 2. 
In general, method compare in pairs seems to be the best.
*/

// Compare in pairs
struct Pair getminmax(int ar[], int n) {
    struct Pair minmax;
    int i;

    if(n % 2 == 0) {
        minmax.min = (ar[1] > ar[0] ? ar[0] : ar[1]);
        minmax.max = (ar[1] > ar[0] ? ar[1] : ar[0]);
        i = 2;
    }
    else {
        minmax.min = ar[0];
        minmax.max = ar[0];
        i = 1;
    }

    while(i < n - 1) {
        if(ar[i] > ar[i + 1]) {
            if(ar[i + 1] < minmax.min) minmax.min = ar[i + 1];
            if(ar[i] > minmax.max) minmax.max = ar[i];
        }
        else {
             if(ar[i] < minmax.min) minmax.min = ar[i];
            if(ar[i + 1] > minmax.max) minmax.max = ar[i + 1];  
        }
        i += 2;
    }
    return minmax;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) cin >> ar[i];
        struct Pair minmax = getminmax(ar, n);
        cout << minmax.min << " " << minmax.max << endl;
    }

    return 0;
}