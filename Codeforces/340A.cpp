#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,count=0;
	cin >>n;
	while(n>0){
	n-=5;
	count++;
	}
	
	cout <<count <<"\n";

	return 0;
}
