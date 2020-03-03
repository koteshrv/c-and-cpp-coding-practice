/*

Given an integer matrix, determine whether it's a Toeplitz matrix. A Toeplitz is one where every diagonal descending from left to right has the same value.

For example, this is a Toeplitz matrix:

[0, 1, 2]
[3, 0, 1]
[4, 3, 0]
[5, 4, 3]
This is not a Toeplitz matrix:

[0, 1, 2]
[3, 0, 7]
[4, 3, 0]
Since matrix[0][1] = 1 but matrix[1][2] = 7

Example 1
Input

matrix = [[13, 83, 15],
[86, 13, 83],
[63, 86, 13]]
Output

true

*/

#include "solution.hpp"
#include <bits/stdc++.h>
using namespace std;


bool Solution::solve(std::vector<std::vector<int>>& matrix) {
    // Write your code here
    int N= sizeof sizeof matrix[0] / sizeof(int);
    int M=sizeof matrix / sizeof matrix[0];
    
    for (int i = 0; i < M - 1; i++)
		for (int j = 0; j < N - 1; j++)
			if (matrix[i][j] != matrix[i + 1][j + 1])
				return false;

	return true;
    
};
