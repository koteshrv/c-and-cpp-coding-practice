#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printlist(Node* n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main() {
    int n, x;
    cin >> n;

    Node* head = new Node;
    Node* temp = head;
    cin >> x;
    temp->data = x;
    for(int i = 1; i < n; i++) {
        Node* newnode = new Node;
        cin >> x;
        newnode->data = x;
        temp->next = newnode;
        temp = temp->next;
    }

    printlist(head);


    return 0;
}