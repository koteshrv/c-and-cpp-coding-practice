#include <bits/stdc++.h>
using namespace std;

bool isLeapyear(int year) {

    if(year % 400 == 0) return true;

    if(year % 100 == 0) return false;

    if(year % 4 == 0)   return true;

    return false;

}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int s;
        cin >> s;

        vector<string> months = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
        vector<string> days_in_week = {"Sunday", "Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday"};

        int day = 1, month = 1, year = 1970, tot_days = 0;
        int days = s / 86400;

        while(days > 0) {

            days--;
            day++;
            tot_days++;

            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                if(day == 31 && days != 0)   {
                    month++;
                    day = 0;
                }
            }

            if(month == 4 || month == 6 || month == 9 || month == 11) {
                if(day == 30 && days != 0)   {
                    month++;
                    day = 0;
                }
            }

            if(month == 2 && isLeapyear(year)) {
                if(day == 29 && days != 0)   {
                    month++;
                    day = 0;
                }
            }

            if(month == 2 && !(isLeapyear(year))) {
                if(day == 28 && days != 0)  {
                    month++;
                    day = 0;
                }
            }

            if(isLeapyear(year)) {
                if(tot_days == 366) {
                    year++;
                    tot_days = 0;
                    month = 1;
                }
            }

            if(!(isLeapyear(year))) {
                if(tot_days == 365) {
                    year++;
                    tot_days = 0;
                    month = 1;
                }
            }

        }

        if(day < 10)    cout << 0;
        cout << day << "-" << months[month - 1] << "-" << year << " " << days_in_week[((s / 86400) + 4) % 7] << endl;
    }

    return 0;
}