/*
Given a list of integers nums, return a reverse of the list.

Example 1
Input

nums = [1, 5, 9, 4]
Output

[4, 9, 5, 1]

*/

#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


std::vector<int> Solution::solve(std::vector<int>& nums) {
    // Write your code here
    std::reverse(std::begin(nums), std::end(nums));
    return nums;
};
