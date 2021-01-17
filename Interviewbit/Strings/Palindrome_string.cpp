/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/

int Solution::isPalindrome(string A) {
    vector<char> s;
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    for(int i = 0; i < A.size(); i++) 
        if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= '0' && A[i] <= '9'))
            s.push_back(A[i]);
    string str(s.begin(), s.end());
    string temp = str;
    reverse(temp.begin(), temp.end());
    return (temp == str);
}
