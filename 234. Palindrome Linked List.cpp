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
    ListNode *findmid(ListNode *head){
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *midnode=findmid(head);
        ListNode *sstart=midnode->next;
        ListNode *curr=sstart;
        ListNode *prev=NULL;
        ListNode *forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        while(prev!=NULL){
            if((prev->val)!=(head->val)){
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};
