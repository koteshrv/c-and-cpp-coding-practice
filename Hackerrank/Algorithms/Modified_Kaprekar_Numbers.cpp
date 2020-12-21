#include <bits/stdc++.h>
using namespace std;

vector<int> kaprekar(int p, int q) {
    int right, left, n;
    long long sq;
    vector<int> vec;
    for(long long i = p; i <= q; i++) {
        sq = i * i;
        n = log10(i) + 1;
        left = sq / pow(10, n);
        right = sq % int(pow(10, n));
        if(right + left == i)   vec.push_back(i);
    }
    return vec;
}

int main() {

    int p, q;
    cin >> p;
    cin >> q;
    vector<int> v = kaprekar(p, q);
    int f = 1;
    for(int i = 0; i < v.size(); i++)   {
        cout << v[i] << " ";
        f = 0;
    }
    if(f)   cout << "INVALID RANGE";
    return 0;
}