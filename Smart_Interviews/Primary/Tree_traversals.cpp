#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int data) {
    if(root == NULL) return new Node(data);
    if(root->data > data) root->left = insert(root->left, data);
    else root->right = insert(root->right, data);
    return root;
}

void InOrder(Node* root) {
    if(root == NULL) return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PostOrder(Node* root) {
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void PreOrder(Node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k;
        Node* root = NULL;
        for(int i = 0; i < n; i++) {
            cin >> k;
            root = insert(root, k);
        }
        PreOrder(root);
        cout << endl;
        InOrder(root);
        cout << endl;
        PostOrder(root);
        cout << endl << endl;
    }
    return 0;
}
