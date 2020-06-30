#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */

     if(s[8]=='A' && stoi(s.substr(0,2)) == 12) return "00"+ s.substr(2,6);
     else if(s[8] == 'A')   return s.substr(0,8);
     else if(s[8] == 'P' && stoi(s.substr(0,2)) == 12)  return "12" + s.substr(2,6);
     else {
         int hr = stoi(s.substr(0,2));
         hr += 12;
         return to_string(hr) + s.substr(2,6);
     }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;

    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
