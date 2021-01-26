// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        int p = 0;
        long long n = 0;
        while(N) {
            n += (pow(10, p++) * (N % 9));
            N /= 9;
        }
        return n;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends