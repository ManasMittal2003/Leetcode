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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode *temp=head;
        ListNode *second=temp->next;
        ListNode *secondhead=second;
        while(temp->next!=NULL&&temp->next->next!=NULL){
            temp->next=temp->next->next;
            temp=temp->next;
            second->next=temp->next;
            second=second->next;
        }
        temp->next=secondhead;
        return head;
    }
};
