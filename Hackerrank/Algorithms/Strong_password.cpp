#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int small = 0, caps = 0, num = 0, special_char = 0;
    string str = "!@#$%^&*()-+";
    for(int i = 0; i < n; i++) {
        if(password[i] >= 'A' && password[i] <= 'Z') caps++;
        else if(password[i] >= 'a' && password[i] <= 'z') small++;
        else if(password[i] >= '0' && password[i] <= '9') num++;
        else if(find(str.begin(), str.end(), password[i]) != str.end()) special_char++;
    }
    int cnt;
    if(n < 6) cnt = 6 - n;
    int count = 0;
    if(caps == 0) count++;
    if(small == 0) count++;
    if(special_char == 0) count++;
    if(num == 0) count++;
    return max(cnt, count);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
