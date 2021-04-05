#include <bits/stdc++.h>
using namespace std;

string queue_to_string(deque<string> q) {
    string s = "/";
    deque<string>::iterator it;
    for (it = q.begin(); it != q.end(); ++it)
        s += (*it + "/");
    return s;
}

deque<string> dq_pwd(string pwd) {
    deque<string> q;
    string temp;
    for(int i = 1; i < int(pwd.size()); i++) {
        if(pwd[i] == '/') {
            q.push_back(temp);
            temp = "";
        }
        else temp += pwd[i];   
    }

    return q;
}

string cd(string dir, string pwd) {
    deque<string> q;
    string temp;
    for(int i = 0; i < int(dir.size()); i++) {
        if(dir[0] == '/' && i == 0) pwd = "/";
        else {
            if(dir[i] == '/') {
                q.push_back(temp);
                temp = "";
            }
            else temp += dir[i];
        }    
    }
    deque<string> pwd_dq = dq_pwd(pwd);
            
    while(!q.empty()) { 
        if(q.front() == "..") {
            pwd_dq.pop_back();
            q.pop_front();
        }
        else {
            pwd_dq.push_back(q.front());
            q.pop_front();
        }
    }
        
    pwd = queue_to_string(pwd_dq);
    return pwd;
}

int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string cmd, dir, pwd = "/";
        for(int i = 0; i < n; i++) {
            
            cin >> cmd;
            
            if(cmd == "pwd") cout << pwd << endl;

            else if(cmd == "cd") {
                cin >> dir;
                pwd = cd(dir, pwd);  
            }
        }
        cout << endl;
    }

    return 0;
}