/*
Write a recursive function printAllBinary that accepts an
integer number of digits and prints all binary numbers that have
exactly that many digits, in ascending order, one per line.

printAllBinary(2);
00
01
10
11

printAllBinary(3);
000
001
010
011
100
101
110
111

*/


#include <bits/stdc++.h>
using namespace std;

void printAllBinary(int digits, string soFar) {
    if (digits == 0) {
        cout << soFar << endl;
    }
     else {
        printAllBinary(digits - 1, soFar + "0");
        printAllBinary(digits - 1, soFar + "1");
    }
}

int main() {
    int n;
    cin >> n;
    printAllBinary(n, "");
}