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

void Input_Vector(vector<long double> &array, int size){
	for (int i = 0; i < size; i++){
		cin >> array[i];
	}
}

long double toRadians(const long double degree) { 
	long double one_deg = (M_PI) / 180; 
	return (one_deg * degree); 
} 

long double distance(long double lat1, long double long1, long double lat2, long double long2) { 
	lat1 = toRadians(lat1); 
	long1 = toRadians(long1); 
	lat2 = toRadians(lat2); 
	long2 = toRadians(long2); 
	
	long double dlong = long2 - long1; 
	long double dlat = lat2 - lat1; 
	long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2); 

	ans = 2 * asin(sqrt(ans)); 
	long double R = 6371; 
	ans = ans * R; 

	return ans; 
} 

int main() { 
    int n;
    cin >> n;

    vec1d(lat,long double,n,0);
    vec1d(lon,long double,n,0);
    vec1d(height,long double,n,0);

    Input_Vector(lat,n);
    Input_Vector(lon,n);
    Input_Vector(height,n);

	long double jlat,jlon;
    cin >> jlat >> jlon;
    
	long double dist,range;
    int count = 0;

    fr(i,0,n-1){
        dist = distance(jlat, jlon, lat[i], lon[i]);
        range = sqrtl(2*6371*height[i]);
        if (dist <= range)
            count++;
    }

    cout << count << endl;

	return 0; 
}