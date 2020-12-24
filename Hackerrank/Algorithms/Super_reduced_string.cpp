#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    for(int i = 0; i < int(s.size()) - 1; i++) {
        if(s[i] == s[i + 1]){
            s.erase(i, 2);
            i = -1;
        }
    }
    return s.size() > 0 ? s : "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
