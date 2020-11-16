#include <bits/stdc++.h>

using namespace std;

// failed some testcases
// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int n=s.size(),m=t.size(),count=0;
    if(m>n) return "No";
    for(int i=0;i<n;i++){
        if(s[i]==t[i])  count++;
        else break;
    }
    if(k-n+(2*count)-m>=0)  return "Yes";
    else return "No";
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
