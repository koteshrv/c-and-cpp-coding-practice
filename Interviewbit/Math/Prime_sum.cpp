/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 

vector<int> Solution::primesum(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= n; j += i) prime[j] = false;
        }
    }
    vector<int> v;
    for(int i = 2; i <= n / 2; i++) {
        if(prime[i] && prime[n - i]) {
            v.push_back(i);
            v.push_back(n - 1);
            return v;
        }
    }
}

*/