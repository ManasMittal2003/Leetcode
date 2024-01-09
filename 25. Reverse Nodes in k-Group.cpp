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
    void reverse(ListNode *head){
        ListNode *curr=head;
        ListNode *forward=NULL;
        ListNode *prev=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
    }
    ListNode *find(ListNode *head,int k){
        int cnt=0;
        while(head!=NULL&&cnt!=(k-1)){
            head=head->next;
            cnt++;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        while(temp!=NULL){
            ListNode *kth=find(temp,k);
            if(kth==NULL){
                if(prev) prev->next=temp;
                break;
            }
            ListNode *nextnode=kth->next;
            kth->next=NULL;
            reverse(temp);
            if(head==temp){
                head=kth;
            }else{
                prev->next=kth;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};
