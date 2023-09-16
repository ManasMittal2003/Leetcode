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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=1;
        ListNode *temp=new ListNode();
        temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==2){
            head=NULL;
            return head;
        }
        cnt=cnt-1;
        int mid=cnt/2;
        int i=0;
        temp=head;
        while(i<mid-1){
            i++;
            temp=temp->next;
        }
        ListNode *temp1=new ListNode();
        temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        delete temp1;
        return head;
    }
};
