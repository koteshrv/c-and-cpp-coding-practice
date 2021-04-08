/*
Given a string A representing an absolute path for a file (Unix-style).

Return the string A after simplifying the absolute path.

Note:

Absolute path always begin with ’/’ ( root directory ).

Path will not have whitespace characters.



Input Format

The only argument given is string A.
Output Format

Return a string denoting the simplified absolue path for a file (Unix-style).
For Example

Input 1:
    A = "/home/"
Output 1:
    "/home"

Input 2:
    A = "/a/./b/../../c/"
Output 2:
    "/c"

    string Solution::simplifyPath(string A) {
    stack<string> st;
    string dir, res;
    res.append("/");
    int len = A.size();
    for(int i = 0; i < len; i++) {
        dir.clear();
        while(A[i] == '/') i++;
        while(i < len && A[i] != '/') dir.push_back(A[i++]);
        if((dir.compare("..") == 0)) {
            if(!st.empty()) st.pop();
        }
        else if(dir.compare(".") == 0) continue;
        else if(dir.size() != 0) st.push(dir);  
    }

    stack<string> stk;
    while(!st.empty()) {
        stk.push(st.top());
        st.pop();
    }

    while(!stk.empty()) {
        string temp = stk.top();
        if(stk.size() != 1) res.append(temp + "/");
        else res.append(temp);
        stk.pop();
    }
    return res;

}

*/