/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.

 Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
TIP: C users, please malloc the result into a new array and return the result. 
If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

Example :

Input : 
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]


void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int p1 = 0, p2 = 0, i = 0;
    vector<int> vec(A.size() + B.size());
    while(p1 < A.size() && p2 < B.size()) {
        if(A[p1] <= B[p2]) vec[i++] = A[p1++];
        else vec[i++] = B[p2++];
    }
    while(p1 < A.size()) vec[i++] = A[p1++];
    while(p2 < B.size()) vec[i++] = B[p2++];
    A.clear();
    A.resize(vec.size());
    for(int i = 0; i < vec.size(); i++) A.push_back(vec[i]);
}

*/