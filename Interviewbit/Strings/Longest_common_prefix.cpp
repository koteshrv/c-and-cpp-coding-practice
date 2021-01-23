/*
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".



Input Format

The only argument given is an array of strings A.
Output Format

Return longest common prefix of all strings in A.
For Example

Input 1:
    A = ["abcdefgh", "aefghijk", "abcefgh"]
Output 1:
    "a"
    Explanation 1:
        Longest common prefix of all the strings is "a".

Input 2:
    A = ["abab", "ab", "abcd"];
Output 2:
    "ab"
    Explanation 2:
        Longest common prefix of all the strings is "ab".


string Solution::longestCommonPrefix(vector<string> &A) {
    string str;
    int n = min(int(A[0].size()), INT_MAX);
    for(int i = 1; i < A.size(); i++) n = min(n, int(A[i].size()));
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = 1; j < A.size(); j++) 
            if(A[j][i] == A[j - 1][i]) count++;
        if(count == A.size()) str += A[0][i];
    }
    return str;
}

*/