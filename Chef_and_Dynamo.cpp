#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,a,s,b,c,d,e,i;
        cin >>n;
        cin >>a;
        s=(2*(long long int)(pow(10,n))+a);
        cout <<s <<endl;
        fflush(stdout);
        cin >>b;
        c=((long long int)(pow(10,n))-b);
        cout <<c <<endl;
        fflush(stdout);
        cin >>d;
        e=(s-a-b-c-d);
        cout <<e <<endl;
        fflush(stdout);
        cin >>i;
                
        if(i==-1)
	   abort;
    }

}
