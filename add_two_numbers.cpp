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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* ans = new ListNode(0);
      ListNode* dummy = ans;
        int carry =0, sum =0;
        while(l1!=NULL or l2!=NULL)
        {
            if(l1==NULL)
            {sum = l2->val+carry;
            carry = 0;
            carry= sum/10;
            ListNode * add = new ListNode(sum%10);
            dummy->next = add;
            dummy=dummy->next;
            l2=l2->next; 
            }
            else if (l2==NULL)
            {
            sum = l1->val+carry;
            carry = 0;
            carry= sum/10;
            ListNode * add = new ListNode(sum%10);
            dummy->next = add;
            dummy=dummy->next;
            l1=l1->next;
            }
            else
            { 
            sum = l1->val + l2->val+carry;
            carry = 0;
            carry= sum/10;
            ListNode * add = new ListNode(sum%10);
            dummy->next = add;
            dummy=dummy->next;
            l1=l1->next;
            l2=l2->next;}
        }
        if(carry!=0)
        {
            ListNode * add = new ListNode(carry);
            dummy->next = add;
        }
        return ans->next;
    }
};