#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,free_rooms=0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        if(b-a>=2)  free_rooms++;
    }
    cout << free_rooms;
    return 0;
}