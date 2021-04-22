/*
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A == NULL || A->next == NULL) return A;
    ListNode *temp = new ListNode(0);
    temp->next = A;
    ListNode *prev = temp;
    while(A != NULL) {
        while((A->next  != NULL) && (A->val == A->next->val)) 
            A = A->next;
        if(prev->next = A) prev = prev->next;
        else prev->next = A->next;
        A = A->next;
    }
    return temp->next;
}

*/