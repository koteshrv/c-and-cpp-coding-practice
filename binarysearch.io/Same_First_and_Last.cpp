/*
Given a list of integers, return true if the length of the list is greater than 1 and the first element and the last element are equal.

Example 1
Input

nums = [1]
Output

false
Explanation

The length of the list is not greater than 1

Example 2
Input

nums = [2, 2]
Output

true

*/

#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(std::vector<int>& nums) {
    // Write your code here
    long long int size = nums.size();
    if(( size >1 ) && nums[0]==nums[size-1])
        return true;
    return false;
};
