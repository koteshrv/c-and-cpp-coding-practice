#include <iostream>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <iomanip>
#include <limits.h>
#include <string>
#include <math.h> 
#include <float.h>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fr(i, a, b) for (int i=a; i<=b; i++)
#define vec1d(v,T,n,init) vector<T> v(n,init)
#define vec2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

void Input_Vector(vector<int> &array, int size){
	for (int i = 0; i < size; i++){
		cin >> array[i];
	}
}

int Compute(vector<int> &v, int k){
    set <int> s;
    int n = v.size();

    fr(i,0,n-1){
        s.insert(v[i]);
    }

    int count = 0;
    fr(i,0,n-1){
        auto it = s.find(v[i]);
        auto nt = next(it,1);
        auto pr = prev(it,1);

        if (nt == s.end() && v[i] - *pr <= k){
            count++;
        }

        else if(it == s.begin() && *nt - v[i] <= k){
            count++;
        }
        
        else if (nt != s.end() && it != s.begin()){
            if (v[i] - *pr <= k || *nt - v[i] <= k){
                count++;
            }
        }

        //cout << v[i] << " " << count << endl;
    }

    return count;
}

int main(){
    int T = 1;

    while(T--){
        int n,k;
        cin >> n >> k;
        
        vec1d(v,int,n,0);
        Input_Vector(v,n);

        cout << Compute(v,k) << endl;
    }
}