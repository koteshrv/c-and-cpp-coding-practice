#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    vector<int> seqList[n];
    int lastAnswer = 0;
    for(int i = 0; i < q; i++) {
        int operation, x, y;
        cin >> operation >> x >> y;
        int pos = (x ^ lastAnswer) % n; 
        if(operation == 1) seqList[pos].push_back(y);
        else {
            int index = y % (seqList[pos].size());
            lastAnswer = seqList[pos][index];
            cout << lastAnswer << endl;
        }
    }
    
    return 0;
}