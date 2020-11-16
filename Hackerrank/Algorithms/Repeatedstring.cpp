#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int len=s.size();
    int cnt=count(s.begin(),s.end(),'a');
    if(cnt==0)  return 0;
    if(len==1)    return n;
    return (cnt*(n/len))+count(s.begin(),s.begin()+(n%len),'a');
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
