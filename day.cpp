#include <bits/stdc++.h>

using namespace std;

string printDay(int day) {
    switch(day) {
        case 0: cout << "Sunday" << endl;   break;
        case 1: cout << "Monday" << endl;   break;
        case 2: cout << "Tuesday" << endl;   break;
        case 3: cout << "Wednesday" << endl;   break;
        case 4: cout << "Thursday" << endl;   break;
        case 5: cout << "Friday" << endl;   break;
        case 6: cout << "Saturday" << endl;   break;
        default: cout << "Wrong answer" << endl;
    }
}

int monthCode(int month) {
    int MonthCode[12] = {0,3,3,6,1,4,6,2,5,0,3,5};
    return MonthCode[month];
}

int centuryCode(int cent) {
    int rem = cent % 4;
    int CenturyCode[4] = {0,6,4,2};
    return CenturyCode[rem];
}

int main() {
    cout << "Enter any date" << endl;
    cout << "For example 30/07/2000" << endl;
    int day,month,year;
    scanf("%d/%d/%d",&day,&month,&year);
    int oddDays;
    oddDays = day + monthCode(month - 1) + (year % 100) + ((year % 100) / 4) + centuryCode((year / 100) + 1);
    if((year % 100  != 0 && year % 4 == 0) || (year % 100  == 0 && year % 400 == 0)) {
        if(month == 01 || month == 02)  oddDays--;
    }
    //cout << oddDays << endl;
    oddDays %= 7;
    printDay(oddDays);
 }