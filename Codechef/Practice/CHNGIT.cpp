#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n],b[101]={0};
	    for(int i=0;i<n;i++)
	        cin >>a[i];
	        
	    for(int j=0;j<n;j++)
            b[a[j]]++;
            
        int max=b[a[0]];
        
        for(int i=0;i<n;i++){
            if(b[a[i]]>max)
                max=b[a[i]];
        }
        
        cout <<n-max <<endl;
	    
	}
	return 0;
}
