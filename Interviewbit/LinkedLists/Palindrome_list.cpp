/*
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
int Solution::lPalin(ListNode* A) {
    ListNode *temp = A;
    int len = 0;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    ListNode *midNode = A;
    for(int i = 0; i < (len + 1) / 2; i++) midNode = midNode -> next;
    ListNode *nextNode, *prevNode = NULL, *presentNode = midNode;
    while(presentNode != NULL) {
        nextNode = presentNode->next;
        presentNode->next = prevNode;
        prevNode = presentNode;
        presentNode = nextNode;
    }
    while(prevNode != NULL && A != NULL) {
        if(prevNode->val != A->val) return 0;
        prevNode = prevNode->next;
        A = A->next;
    }
    return 1;
}

*/