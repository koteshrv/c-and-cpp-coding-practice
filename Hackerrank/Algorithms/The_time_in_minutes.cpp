#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                  "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", 
                  "twenty", "twenty one", "twenty two", "twenty three", "twenty four","twenty five", "twenty six", 
                  "twenty seven", "twenty eight", "twenty nine"};
    
    string time = "", s1 = "half past ", s2 = "quarter to ";
    if(m == 0) time += num[h] + " o' clock";
    else if(m == 30) time = s1 + num[h];
    else if(m > 30) {
        m = 60 - m;
        if(m == 1) time += num[m] + " minute to " + num[h + 1];
        else if(m == 15) time += "quarter to " + num[h + 1];
        else time += num[m] + " minutes to " + num[h + 1];
    }
    else {
        if(m == 1) time += num[m] + " minute past " + num[h];
        else if(m == 15) time += "quarter past " + num[h];
        else time += num[m ] + " minutes past " + num[h];
    }
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
