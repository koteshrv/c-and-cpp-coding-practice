/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0?
Find all unique triplets in the array which gives the sum of zero.

Note:

 Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
The solution set must not contain duplicate triplets. For example, given array S = {-1 0 1 2 -1 -4}, A solution set is:
(-1, 0, 1)
(-1, -1, 2)


vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    int n = A.size();
    long long sum = 0;
    sort(A.begin(), A.end());
    for(int i = 0; i < n - 2; i++) {
        int p = i + 1, q = n - 1;
        while(p < q) {
            sum = (long long)A[i] + (long long)A[p] + (long long)A[q];
            if(sum == 0) {
                ans.push_back({A[i], A[p], A[q]});
                p++;
                q--;
            }
            
            else if(sum > 0) q--;
            else p++;
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

*/