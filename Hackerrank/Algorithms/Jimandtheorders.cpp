#include <bits/stdc++.h>

using namespace std;


// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders) {
    int n = orders.size();
    vector<pair<int,int>> vp(n); 
    for (int i = 0; i < n; i++) {
        vp[i].first = orders[i][0]+orders[i][1];
        vp[i].second = i+1;
    }
    sort(vp.begin(), vp.end()); 
    
    vector<int> que(n);
    for(int i=0;i<n;i++) que[i]=vp[i].second;

    return que;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
