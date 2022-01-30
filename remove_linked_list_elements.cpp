/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      if(head==NULL)
        return NULL;
    ListNode* fast=head;
    ListNode* prev=NULL;
    while(fast!=NULL) {
        if(fast->val==val) {
        if(prev==NULL)
            head=fast->next;
        else
            prev->next=fast->next;
        }
        else 
            prev=fast;
            fast=fast->next;
    }
            return head;
    }
};