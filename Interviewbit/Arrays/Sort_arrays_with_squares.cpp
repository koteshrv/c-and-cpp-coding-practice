/*
Given a sorted array A containing N integers both positive and negative.

You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.

Try to this in O(N) time.


Problem Constraints
1 <= N <= 105.

-103 <= A[i] <= 103



Input Format
First and only argument is an integer array A.



Output Format
Return a integer array as described in the problem above.



Example Input
Input 1:

 A = [-6, -3, -1, 2, 4, 5]
Input 2:

 A = [-5, -4, -2, 0, 1]


Example Output
Output 1:

 [1, 4, 9, 16, 25, 36]
Output 2:

 [0, 1, 4, 16, 25]

 vector<int> Solution::solve(vector<int> &A) {
vector<int>ans;
int i=0;
int n = A.size();
while(A[i] < 0) i++; // find index from where poitive elments start

int j = i;
i--;
while(i>=0 && j<n)
{
    if(abs(A[i]) < abs(A[j]))
    {
        ans.push_back(A[i]*A[i]);
        i--;
    }
    else{
        ans.push_back(A[j]*A[j]);
        j++;
    }
}

while(i>=0)
{
    ans.push_back(A[i]*A[i]);
        i--;
}
while(j<n)
{
    ans.push_back(A[j]*A[j]);
        j++;
}
return ans;
}
// time complexity O(n)
// space complexity O(n)

*/