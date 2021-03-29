/*
Divide two integers without using multiplication, division and mod operator.

Return the floor of the result of the division.

Example:

5 / 2 = 2
Also, consider if there can be overflow cases. For overflow case, return INT_MAX.

Note: INT_MAX = 2^31 - 1

int Solution::divide(int A, int B) {
    int sign = ((A < 0) ^ (B < 0)) ? -1 : 1;
    long long a = A, b = B;
    a = abs(a);
    b = abs(b);
    long long q = 0, k = 0;
    for(int i = 31; i >= 0; i--) {
        if(k + (b << i) <= a) {
            k += b << i;
            q |= 1LL << i;
        }
    }
    if(q * sign < INT_MIN) return INT_MIN;
    if(q * sign > INT_MAX) return INT_MAX;
    return q * sign;
}


*/