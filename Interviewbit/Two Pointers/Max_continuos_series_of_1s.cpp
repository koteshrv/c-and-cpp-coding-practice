/*
ou are given with an array of 1s and 0s. And you are given with an integer M, which signifies number of flips allowed.
Find the position of zeros which when flipped will produce maximum continuous series of 1s.

For this problem, return the indices of maximum continuous series of 1s in order.

Example:

Input : 
Array = {1 1 0 1 1 0 0 1 1 1 } 
M = 1

Output : 
[0, 1, 2, 3, 4] 

If there are multiple possible solutions, return the sequence which has the minimum start index.


vector<int> Solution::maxone(vector<int> &A, int B) {
    int i = 0;
    int count, k, index, final = -1;
    while(i < A.size()) {
        if((i == 0) || ((i > 0) && (A[i - 1] != 1))) {
            count = 0;
            k = 0;
            for(int j = i; j < A.size(); j++) {
                if(A[j] == 0) k++;
                if(k > B) break;
                count++;
            }
            
            if(count > final) {
                index = i;
                final = count;
            }
        }
        i++;
    }
    
    vector<int> ans;
    for(int i = index; i < index + final; i++) ans.push_back(i);
    return ans;
}

*/