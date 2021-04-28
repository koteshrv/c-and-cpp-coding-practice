#include <bits/stdc++.h>
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

int height(Node* root) {
    if(root == NULL) return -1;
    return (1 + max(height(root->left), height(root->right)));
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
        cout << height(root) << endl;
    }
    return 0;
}
