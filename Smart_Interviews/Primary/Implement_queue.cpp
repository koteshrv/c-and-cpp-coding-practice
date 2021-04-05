#include <bits/stdc++.h>
using namespace std;

int main() {

    int t = 1;
    cin >> t;
    int N = 10000;
    int ar[N], front = -1, rear = -1;

    while(t--) {
        string q, num;
        cin >> q;
        if(q == "Enqueue") {
            cin >> num;
            rear = (rear + 1) % N;
            ar[rear] = stoi(num);
        }
        else if(q == "Dequeue"){
            if(front != rear) {
                front = (front + 1) % N;
                cout << ar[front] << endl;
            }
            else cout << "Empty" << endl;
        }
            
    }

    return 0;
}