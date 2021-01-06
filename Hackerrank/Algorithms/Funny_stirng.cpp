#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    string rev = s;
    reverse(rev.begin(), rev.end());
    vector<int> v1, v2;
    for(int i = 1; i < int(s.size()); i++) {
        v1.push_back(abs(int(s[i]) - int(s[i - 1])));
        v2.push_back(abs(int(rev[i]) - int(rev[i - 1])));
    }
    int count = 0;
    for(int i = 0; i < int(v1.size()); i++) if(v1[i] == v2[i]) count++;
    //for(int i = 0; i < (int)v1.size(); i++) cout << v1[i] << " " << v2[i] << endl;
    if(count == v1.size()) return "Funny";
    return "Not Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
