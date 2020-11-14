#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[1000];
    cin.getline(str, 1000);
    str[0]=toupper(str[0]);
    for(int i=0;i<strlen(str);i++)   cout << str[i];
    return 0;
}