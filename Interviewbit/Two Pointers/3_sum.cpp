/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

Example:
given array S = {-1 2 1 -4},
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)


int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int i = 0, sum = 0, min = INT_MAX, n = A.size();
    while(i < A.size() - 2) {
        int l = i + 1, r = n - 1;
        while(r > l) {
            int temp = A[l] + A[r] + A[i];
            int difference = abs(temp - B);
            if(difference == 0) return B;
            if(difference < min) {
                min = difference;
                sum = temp;
            }
            if(temp < B) l++;
            else r--;
        }
        i++;
    }
    return sum;
}

*/