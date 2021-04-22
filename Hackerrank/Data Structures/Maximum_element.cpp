#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> str_to_int(string s) {
    string op, n;
    vector<int> vec;
    int l = s.size(), i = 0;
    while(s[i] != ' ') op += s[i++];
    i++;
    vec.push_back(stoi(op));
    if(vec[0] != 1) return vec;
    while(i < l) n += s[i++];
    vec.push_back(stoi(n));
    return vec;
}

vector<int> getMax(vector<string> operations) {
    vector<int> res;
    stack<int> st, max_st;
    int len = operations.size();
    for(int i = 0; i < len; i++) {
        vector<int> v = str_to_int(operations[i]);
        int op = v[0];
        if(op == 1) {
            if(st.empty()) {
                st.push(v[1]);
                max_st.push(v[1]);
            }
            else {
                if(v[1] > max_st.top()) max_st.push(v[1]);
                else max_st.push(max_st.top());
                st.push(v[1]);
            }
        }
        if(op == 2) {
            if(!st.empty()) {
                max_st.pop();
                st.pop();   
            }
        }
        if(op == 3) res.push_back(max_st.top());
        
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
