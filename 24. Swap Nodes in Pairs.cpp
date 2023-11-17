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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *current=head;
        ListNode *forward;
        ListNode *prev=NULL;
        int count=0;
        while(current!=NULL&&count<2){
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
            count++;
        }
        if(current!=NULL){
            head->next=swapPairs(current);
        }
        return prev;
    }
};
