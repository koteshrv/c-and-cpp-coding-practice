/*
Given a sorted list nums of positive integers, return the value of the middle element. If the length of the list is even, return the first middle element.

Example 1
Input

nums = [10, 20, 30]
Output

20
Example 2
Input

nums = [10, 20, 30, 40]
Output

20
Explanation

20 and 30 are both middle elements but 20 is the first one.

*/

#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


int Solution::solve(std::vector<int>& nums) {
    // Write your code here
    long long int size = nums.size();
    if(size%2 == 0)
        return nums[(size-1)/2];
    return nums[size/2];
};
