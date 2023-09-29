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
        ListNode *i=new ListNode();
        i=head->next;
        ListNode *anshead=new ListNode();
        anshead=NULL;
        ListNode *tail=new ListNode();
        tail=NULL;
        int dig=0;
        while(i!=NULL){
            if(i->val==0){
                ListNode *newnode=new ListNode();
                newnode->val=dig;
                if(anshead==NULL){
                    anshead=tail=newnode;
                }else{
                    tail->next=newnode;
                    tail=newnode;
                }
                i=i->next;
                dig=0;
                continue;
            }
            dig=dig+i->val;
            i=i->next;
        }
        return anshead;
    }
};
