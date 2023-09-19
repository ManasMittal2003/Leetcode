/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=new ListNode();
        slow=NULL;
        ListNode *fast=new ListNode();
        fast=head;
        if(head==NULL||head->next==NULL){
            return false;
        }
        while(fast!=slow){
            if(fast->next==NULL||fast->next->next==NULL){
                return false;
            }
            fast=fast->next->next;
            if(slow==NULL){
                slow=head;
            }
            slow=slow->next;
        }
        return true;
    }
};
