#include <bits/stdc++.h>
using namespace std;

bool colsort(const vector<int>& v1, const vector<int>& v2 ) {
    return v1[0] > v2[0];
}
 

int main() {
	// your code goes here
	int n;
    cin >> n;
    int a[n],b[n],scoreA=0,scoreB=0;
    for(int i=0;i<n;i++)    cin >> a[i] >> b[i];
    vector<vector<int>> score(n,vector<int> (2));
    for(int i=0;i<n;i++) {
        scoreA+=a[i];
        scoreB+=b[i];
        (scoreA>scoreB)?(score[i][0]=scoreA-scoreB,score[i][1]=1):(score[i][0]=scoreB-scoreA,score[i][1]=2);
    }
    sort(score.begin(),score.end(),colsort);
    //for(int i=0;i<n;i++)    cout << score[i][1] << " " << score[i][0] << endl;
    cout << score[0][1] << " " << score[0][0] << endl;
    return 0;
}

/*

int n;
	cin>>n;
	int a, b, aSum=0, bSum=0, maxLead = -1, winP = -1;
	while(n--) {
		cin>>a>>b;
		aSum += a; bSum += b;
		if(maxLead < abs(aSum-bSum)) {
			maxLead = abs(aSum-bSum);
			if(aSum>bSum) winP = 1;
			else winP = 2;
		}
	}

	cout<<winP<<" "<<maxLead<<endl;

*/