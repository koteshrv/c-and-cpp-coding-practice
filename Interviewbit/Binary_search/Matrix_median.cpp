/*
Given a matrix of integers A of size N x M in which each row is sorted.

Find an return the overall median of the matrix A.

Note: No extra memory is allowed.

Note: Rows are numbered from top to bottom and columns are numbered from left to right.



Input Format

The first and only argument given is the integer matrix A.
Output Format

Return the overall median of the matrix A.
Constraints

1 <= N, M <= 10^5
1 <= N*M  <= 10^6
1 <= A[i] <= 10^9
N*M is odd
For Example

Input 1:
    A = [   [1, 3, 5],
            [2, 6, 9],
            [3, 6, 9]   ]
Output 1:
    5
Explanation 1:
    A = [1, 2, 3, 3, 5, 6, 6, 9, 9]
    Median is 5. So, we return 5.

Input 2:
    A = [   [5, 17, 100]    ]
Output 2:
    17 ``` Matrix=


int Solution::findMedian(vector<vector<int> > &A) {
    int min = INT_MAX, max = INT_MIN;
    int rows = A.size();
    int cols = A[0].size();
    // finding min and max
    
    for(int i = 0; i < rows; i++) {
        if(A[i][0] < min) min = A[i][0];
        if(A[i][cols - 1] > max) max = A[i][cols - 1];
    }
    
    int median = (rows * cols + 1) / 2;
    
    while(min < max) {
        int mid = min + (max - min) / 2;
        int count = 0;
        for(int i = 0; i < rows; i++) {
            count += upper_bound(&A[i][0], &A[i][cols], mid) - &A[i][0];
        }
        if(count < median) min = mid + 1;
        else max = mid;
    }
    return min;
}

*/