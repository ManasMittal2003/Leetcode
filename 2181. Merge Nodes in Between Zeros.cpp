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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newhead=head;
        ListNode *temphead=head;
        ListNode *temp=head->next;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                temphead->val=sum;
                if(temp->next!=NULL){
                    temphead->next=temp;
                }else{
                    temphead->next=NULL;
                }
                temphead=temphead->next;
                sum=0;
            }
            temp=temp->next;
        }
        return newhead;
    }
};
