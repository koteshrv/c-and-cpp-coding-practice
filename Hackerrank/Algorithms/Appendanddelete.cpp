#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int slen = s.size();
    int tlen = t.size();
    int count = 0;
    for(int i = 0; i < slen; i++) {
        if(s[i] == t[i])  count++;
        else break;
    }
    int op = k - (tlen - count) - (slen - count);
    if(slen + tlen < k) return "Yes";
    return (op % 2 == 0 && op >= 0 ? "Yes" : "No");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
