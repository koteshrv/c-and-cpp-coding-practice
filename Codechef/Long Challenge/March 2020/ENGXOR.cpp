#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

#define lli long long int
#define MAX 100000

using namespace std;

int scan(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 }; 
  
// Recursively get nibble of a given number and map them in the array 
unsigned int countSetBits(unsigned int num) 
{ 
    int nibble = 0; 
    if (0 == num) 
        return num_to_bits[0]; 
  
    // Find last nibble 
    nibble = num & 0xf; 
  
    // Use pre-stored values to find count 
    // in last nibble plus recursively add 
    // remaining nibbles. 
    return num_to_bits[nibble] + countSetBits(num >> 4); 
} 

lli a[MAX],x[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;;
	while(t--){
        lli n,q,b;
        scan(&n);
        scan(&q)
        for(lli i=0;i<n;i++)
            scan(&a[i]);
        while(q--){
            scan(&b);
            lli i=0;
            lli even=0,odd=0,bit_count=0;
            // XOR Operation and Counting Even and Odd Bits
            for(lli j=0;j<n;j++){
                x[j]=a[j]^b;
                bit_count=countSetBits(x[j]);
                if(bit_count%2==0)
                    even++;
                else
                    odd++;
            }

            cout << even <<"  " <<odd <<"\n";

        }
        

    }
	return 0;
}
