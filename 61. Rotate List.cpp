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
    ListNode *find(ListNode *head,int cnt){
        int i=0;
        ListNode *temp=head;
        while(i!=(cnt-1)){
            i++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int len=0;
        ListNode *temp=head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        len=len+1;
        if(k%len==0){
            return head;
        }
        k=k%len;
        temp->next=head;
        ListNode *kth=find(head,len-k);
        head=kth->next;
        kth->next=NULL;
        return head;
    }
};
