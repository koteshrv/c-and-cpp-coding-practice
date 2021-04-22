/*
Problem Description

Given an integer array A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.



Problem Constraints
1 <= |A| <= 100000



Input Format
The only argument given is integer array A.



Output Format
Return the total water it is able to trap after raining.



Example Input
Input 1:

 A = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
Input 2:

 A = [1, 2]


Example Output
Output 1:

 6
Output 2:

 0

 int Solution::trap(const vector<int> &A) {
    vector<int> ar = A;
    int n = A.size(), ml[n], mr[n], ans = 0;
    ml[0] = ar[0];
    mr[n - 1] = ar[n - 1];
    for(int i = 1; i < n; i++) ml[i] = max(ml[i - 1], ar[i]);
    for(int i = n - 2; i >= 0; i--) mr[i] = max(mr[i + 1], ar[i]);
    for(int i = 0; i < n; i++) ans += (min(ml[i], mr[i]) - ar[i]);
    return ans;
}

*/