#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,a,s,b,c,d,e,i;
        cin >>n;
        cin >>a;
        s=5*pow(10,n);
        cout << s <<endl;
        fflush(stdout);
        cin >>b;
        c=ceil(s/5);
        cout <<c <<endl;
        fflush(stdout);
        cin >>d;
        e=(s-a-b-c-d);
        cout <<e <<endl;
        fflush(stdout);
        cin >>i;
                
        if(i==1)
            continue;
        else
            abort;
        }
}
