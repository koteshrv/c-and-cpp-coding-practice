#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter number of semesters: ";
    cin >> n;
    double cgpa = 0, sgpa = 0;
    vector<int> theory, labs, sem;
    for(int i = 1; i <= n; i++) {
        cout << "------------------------Semester " << i << "------------------------" << endl;
        cout << "Theory subjects in " << i << " semester: ";
        int theory_count, labs_count, seminar_count;
        cin >> theory_count;
        cout << "Labs in " << i << " semester: ";
        cin >> labs_count;
        cout << "Seminar in " << i << " semester: ";
        cin >> seminar_count;
        int temp;
        vector<int> t, l, s;
        for(int j = 1; j <= theory_count; j++) {
            cout << "Enter marks of EC" << i << "T" << j << ": ";
            cin >> temp;
            theory.push_back(temp);
            t.push_back(temp);
        }
        int tem;
        for(int k = 1; k <= labs_count; k++) {
            cout << "Enter marks of EC" << i << "L" << k << ": ";
            cin >> temp;
            labs.push_back(temp);
            l.push_back(temp);
            tem = k;
        }
        if(seminar_count) {
            cout << "Enter marks of ET" << i << "L" << tem + 1 << ": ";
            cin >> temp;
            sem.push_back(temp);
            s.push_back(temp);
        }
        for(int l = 0; l < theory_count; l++) sgpa += t[l] * 3;
        for(int x = 0; x < labs_count; x++) sgpa += l[x] * 2;
        for(int l = 0; l < seminar_count; l++) sgpa += s[l];
        for(int l = 0; l < theory.size(); l++) cgpa += theory[l] * 3;
        for(int l = 0; l < labs.size(); l++) cgpa += labs[l] * 2;
        for(int l = 0; l < sem.size(); l++) cgpa += sem[l];
        sgpa /= (theory_count * 3 + labs_count * 2 + seminar_count);
        cgpa /= (theory.size() * 3 + labs.size() * 2 + sem.size());

        cout << fixed << setprecision(3) << "SGPA for the " << i << " semester is " << sgpa << endl; 
        cout << fixed << setprecision(3) << "CGPA till the " << i << " semester is " << cgpa << endl; 
        sgpa = 0;
        cgpa = 0;
    }


    return 0;
}