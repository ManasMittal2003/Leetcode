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
        // map<ListNode *,int> mp;
        // ListNode *temp=new ListNode();
        // temp=head;
        // while(temp!=NULL){
        //     mp[temp]++;
        //     if(mp[temp]==2){
        //         return true;
        //     }
        //     temp=temp->next;
        // }
        // return false;
        ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL){
            return 0;
        }
        while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return 1;
            }
        }
        return 0;
    }
};
