#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    vector<int> a = {1, 20, 4, 56, 54, 87};
    sort(a.begin(), a.end()); // O(NlogN)

    // binary search takes O(logN) and returns "1" if the given value is present else "0"

    bool present = binary_search(a.begin(), a.end(), 54);   // 1
    cout << present << endl;

    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(250);

    // vector<int>::iterator it = lower_bound(a.begin(), a.end(), 100);	// >=
    // vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), 100);   // <
    // here we can replace vector<int>::iterator can be replaced by "auto", It takes care of lower_bound or upper_bound

    auto it = lower_bound(a.begin(), a.end(), 100);	// >=
    auto it2 = upper_bound(a.begin(), a.end(), 100);   // <


    cout << *it << " " << *it2 << endl;     // 100 250
    cout << it2 - it << endl;   // 5

    sort(a.begin(), a.end(), f);

    /*
    vector<int>::iterator it3;

    for (it3 = a.begin(); it3 != a.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;
    */

   for (int x: a)   
   {
       cout << x << " ";
   }
   cout << endl;

   // 250 100 100 100 100 100 87 56 54 20 4 1 

   for (int &x: a)  // since we are passing "x" with reference(&), values in "a" are incremented by 1
   {
       x++;
   }
   
   for (int x: a)   
   {
       cout << x << " ";
   }
   cout << endl;

   // 251 101 101 101 101 101 88 57 55 21 5 2
}

void setDemo()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    for (int x: s)
        cout << x << " ";
    cout << endl;

    // -10 -1 1 2 

    auto it = s.find(-1);   // returns it if given value is present else returns s.end()

    if (it == s.end())
        cout << "not present\n";
    else 
    {
        cout << "present\n";
        cout << *it << endl;
    }

    auto it2 = s.upper_bound(-1);
    auto it3 = s.upper_bound(0);
    cout << *it2 << " " << *it3 << endl;    //1 1

    auto it4 = s.upper_bound(2);
    if(it4 == s.end())
        cout << "not present\n";
    else
        cout << "present\n";

    s.erase(1); // erases "1" from set in O(logN)

    for (int x: s)
    {
        cout << x << " ";
    }
    cout << endl;

}

void mapDemo()
{
    map <int, int> a;
    a[1] = 100;
    a[2] = 256;
    a[3] = -1;
    a[546985] = 894;

    map <char, int> count;
    string name = "Koteswararao";

    for (char c: name)
    {
        count[c]++;
    }
    cout << count['a'] << " " << count['r'] << endl;

    auto it = a.find('a');
    a.erase('w');



}

int main()
{
    // vectorDemo();
    // setDemo();
    mapDemo();
}
