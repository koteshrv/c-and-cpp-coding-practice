#include <bits/stdc++.h>
using namespace std;

const int n = 10000;
int ar[n], front = -1, rear = 0;

void pop_front() {
    if(front == -1) cout << "Empty" << endl;
    else {
        cout << ar[front] << endl;
        if(front == rear) front = rear = -1;
        else if(front == n - 1) front = 0;
        else front++;
    }
}

void pop_back() {
    if(front == -1) cout << "Empty" << endl;
    else {
        cout << ar[rear] << endl;
        if(front == rear) front = rear = -1;
        else if(rear == 0) rear = n - 1;
        else rear--;
    } 
}

void push_front(int val) {
    if(front == -1) front = rear = 0;
    else if(front == 0) front = n - 1;
    else front--;
    ar[front] = val;
}

void push_back(int val) {
    if(front == -1) front = rear = 0;
    else if(rear == n - 1) rear = 0;
    else rear++;
    ar[rear] = val;
}


int main() {

    int t = 1;
    cin >> t;

    while(t--) {
        string q, num;
        cin >> q;
        if(q == "push_back") {
            cin >> num;
            push_back(stoi(num));
        }

        else if(q == "push_front") {
            cin >> num;
            push_front(stoi(num));
        }

        else if(q == "pop_front") pop_front();
        else if(q == "pop_back") pop_back();
            
    }

    return 0;
}