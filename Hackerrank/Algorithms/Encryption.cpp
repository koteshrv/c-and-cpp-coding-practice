#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    int len = s.size();
    int row = round(sqrt(len));
    int col = (row >= sqrt(len) ? row : row + 1); 
    string code = "";
    for(int i = 0; i < col; i++) {
        for(int j = i; j < len; j += col) code += s[j];
        code += ' ';
    }
    return code;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
