#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N % 2 != 0)  cout << "Weird" <<endl;
    else if(N <= 5 && N >= 2)   cout << "Not Weird" << endl;
    else if(N <= 20 && N >= 6)  cout << "Weird" << endl;
    else    cout << "Not Weird" <<endl;
    return 0;
}
