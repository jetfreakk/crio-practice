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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sum = 0;
        int tbr=0;
        ListNode* dummy = head;
        ListNode* dummy2 = head;
        while(dummy!=NULL)
        {sum++;
         dummy=dummy->next;}
        if(sum ==1)
            return NULL;
        if(sum==n)
            return head->next;
        tbr = sum-n-1;
        while(tbr>0)
        {
            dummy2=dummy2->next;
            tbr--;
        }
        dummy2->next=dummy2->next->next;
          return head; 
    }
};

//Solution 2