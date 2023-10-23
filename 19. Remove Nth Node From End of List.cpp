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
    ListNode* removeNthFromEnd(ListNode* head, int K) {
        int cnt=0;
        ListNode *temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int nodedel=cnt-K+1;
        int i=1;
        temp=head;
        if(nodedel==1){
            head=head->next;
            return head;
        }
        while(i<nodedel-1){
            temp=temp->next;
            i++;
        }
        ListNode *del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};
