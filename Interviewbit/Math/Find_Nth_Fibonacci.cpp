/*

Given an integer A you need to find the Ath fibonacci number modulo 109 + 7.

The first fibonacci number F1 = 1

The first fibonacci number F2 = 1

The nth fibonacci number Fn = Fn-1 + Fn-2 (n > 2)



Problem Constraints
1 <= A <= 109.



Input Format
First argument is an integer A.



Output Format
Return a single integer denoting Ath fibonacci number modulo 109 + 7.



Example Input
Input 1:

 A = 4
Input 2:

 A = 3


Example Output
Output 1:

 3
Output 2:

 2


Example Explanation
Explanation 1:

 F3 = F2 + F1 = 1 + 1 = 2
 F4 = F3 + F2 = 2 + 1 = 3
Explanation 2:

 F3 = F2 + F1 = 1 + 1 = 2

 
#define ll long long
#define M 1000000007
struct mat
{
    ll a,b,c,d;
};
mat po(ll n)
{
    if(n==1)
    {
        mat in;
        in.a=1;
        in.b=1;
        in.c=1;
        in.d=0;
        return in;
    }
    if(n==2)
    {
        mat in;
        in.a=2;
        in.b=1;
        in.c=1;
        in.d=1;
        return in;
    }
    else
    {
        mat a=po(n/2);
        mat b;
        b.a=(a.a)*(a.a)+(a.b)*(a.c);
        b.b=(a.a)*(a.b)+(a.b)*(a.d);
        b.c=(a.a)*(a.c)+(a.c)*(a.d);
        b.d=(a.b)*(a.c)+(a.d)*(a.d);
        b.a%=M;
        b.b%=M;
        b.c%=M;
        b.d%=M;
        if(n%2==1)
        {
            mat c;
            c.a=b.a+b.b;
            c.b=b.a;
            c.c=b.c+b.d;
            c.d=b.c;
            c.a%=M;
            c.b%=M;
            c.c%=M;
            c.d%=M;
            return c;
        }
        return b;
    }
}
int Solution::solve(int A) {
    mat re=po(A);
    return re.c;
}
*/