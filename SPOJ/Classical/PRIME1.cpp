#include <bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int limit, vector<long long> &prime) {
    bool mark[limit + 1];
    memset(mark, true, sizeof(mark));
    for(int p = 2; p * p < 32000; p++) {
        if(mark[p] == true) 
            for(int i = p * p; i < limit; i += p) mark[i] = false;
    }
    
    for(int p = 2; p < limit; p++) 
        if(mark[p] == true) {
            prime.push_back(p);
        }

}

int main() {
	int t;
    cin >> t;
    while(t--) {
        long long low_limit, upp_limit;
        cin >> low_limit >> upp_limit;
        vector<long long> primes;
        sieve_of_eratosthenes(upp_limit, primes);
        for(int i = low_limit; i <= upp_limit; i++) if(primes[i] == true)   cout << i << endl;
        cout << endl;
    }

	return 0;
}