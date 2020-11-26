#include <bits/stdc++.h>
using namespace std;

// Structure is used to return two values from get_min_max function
struct Pair
{
    int min;
    int max;
};

// Compare in pairs
// O(n)
struct Pair get_minmax(int ar[], int n) {
    struct Pair minmax;
    int i;

    // If the array has even number of elements then initialize the first two elements as min and max
    if (n % 2 == 0) {
        ar[0] > ar[1] ? (minmax.min = ar[1], minmax.max = ar[0]) : (minmax.min = ar[0], minmax.max = ar[1]);
        i = 2;
    }

    // If the array has odd number of elements then initialize the first element as both min and max
    else {
        minmax.min = ar[0];
        minmax.max = ar[0];
        i = 1;  // Set the initial position to 1
    }

    // In the while loop pick the elements in pairs and compare two elements
    while (i < n - 1) {
        if (ar[i] > ar[i + 1]) {
            if(ar[i] > minmax.max)  minmax.max = ar[i];
            if(ar[i + 1] < minmax.min)  minmax.min = ar[i + 1];
        }
        
        else {
            if(ar[i + 1] > minmax.max)  minmax.max = ar[i + 1];
            if(ar[i] < minmax.min)  minmax.min = ar[i];
        }
        
        i += 2;     // increment the position by two
    }
    return minmax;
}

// Divide and Conquer
// O(n)
struct Pair get_min_max(int ar[], int lower_index, int upper_index) {
    struct Pair minmax, minmax_left, minmax_right;
    int mid;
    
    // If the array has only one element
    if (lower_index == upper_index) {
        minmax.max = ar[lower_index];
        minmax.min = ar[lower_index];
        return minmax;
    }

    // If there are two elements
    if (lower_index + 1 == upper_index) {
        ar[upper_index] > ar[lower_index] ? (minmax.max = ar[upper_index], minmax.min = ar[lower_index]) : (minmax.max = ar[lower_index], minmax.min = ar[upper_index]);
        return minmax;
    }

    // If there are more than two elements
    mid = lower_index + upper_index / 2;
    minmax_left = get_min_max(ar, lower_index, mid);
    minmax_right = get_min_max(ar, mid + 1, upper_index);

    // Compare minimum values of both left and right parts of an array
    minmax_left.min > minmax_right.min ? minmax.min = minmax_right.min : minmax.min = minmax_left.min;

    // Compare maximum values of both left and right parts of an array
    minmax_left.max > minmax_right.max ? minmax.max = minmax_left.max : minmax.max = minmax_right.max;

    return minmax;
}

// Linear Search
// O(n)
void max_and_min(int ar[], int n) {
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)  {
        if(ar[i] > max) max = ar[i];
        if(ar[i] < min) min = ar[i];
    }
    cout << "Maximum element of the array is "  << max << "\n";
    cout << "Minimum element of the array is "  << min << "\n";
}

int main() {
    int ar[] = {1,10,5,5,8,7,6,9,8,4}, n = 10;
    //max_and_min(ar, n);     // Linear Search 
    //struct Pair minmax = get_min_max(ar, 0, 9);  // Divide and Conquer
    struct Pair minmax = get_minmax(ar, n);        // Compare in pairs
    cout << "Maximum element of the array is "  << minmax.max << "\n";
    cout << "Minimum element of the array is "  << minmax.min << "\n";
    return 0;
}