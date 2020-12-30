#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1) {
        int n;
        cin >> n;
        if(n == 0)    break;
        vector<int> a(n), rev(n);
        for(int i = 0; i < n; i++)    cin >> a[i];
        for(int i = 0;i < n; i++) rev[a[i]-1] = i + 1;
        if(a==rev)  cout << "ambiguous" << endl;
        else cout << "not ambiguous" << endl;
    }
	return 0;
}