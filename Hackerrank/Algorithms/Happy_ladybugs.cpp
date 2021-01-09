#include <bits/stdc++.h>

using namespace std;

int isHappy(string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) 
        if(s[i] != '_' && count(s.begin(), s.end(), s[i]) == 1) return 0;
    if(count(s.begin(), s.end(), '_') == 0) {
        for(int i = 1; i < n - 1; i++) 
            if(s[i] != s[i - 1] && s[i] != s[i + 1]) return 0;
    }
    return 1;
}
// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    return (isHappy(b) ? "YES" : "NO");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
