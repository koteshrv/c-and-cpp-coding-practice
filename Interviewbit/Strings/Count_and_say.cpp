/*
The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,
the sequence is 11.


string Solution::countAndSay(int A) {
    string str = "1", res;
    int count = 1;
    if(!A) return res;
    for(int i = 1; i < A; i++) {
        int len = str.size(); count = 1;
        for(int j = 0; j < len; j++) {
            if(j + 1 != len && str[j] == str[j + 1]) count++;
            else res += to_string(count) + str[j];
        }
        str = res;
        res.clear();
    }
    return str;
}

*/