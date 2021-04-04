/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

bool compare(int x, int y) {
    string s1 = to_string(x);
    string s2 = to_string(y);
    return (s1 + s2 > s2 + s1);
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> B = A;
   sort(B.begin(), B.end(), compare);
   int count = 0;
   string s;
   for(int i = 0; i < B.size(); i++) {
       if(B[i] == 0) count++;
       s += to_string(B[i]);
   }
   return (count == B.size() ? "0" : s);
}


*/