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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp -> next;
            size++;
        }
        if(size<k){
            return head;
        }
        int count=0;
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *forward=NULL;
        while(curr!=NULL&&count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);
        }
        return prev;
    }
};
