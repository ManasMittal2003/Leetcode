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
    void revlist(ListNode* &prev){
        ListNode *curr=prev->next;
        prev->next=NULL;
        while(curr!=NULL){
            ListNode *forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
    }
    bool isPalindrome(ListNode* head) {
        int cnt=0;
        ListNode *temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int middle;
        if(cnt%2==0){
            middle=cnt/2;
        }
        else{
            middle=(cnt/2)+1;
        }
        temp=head;
        cnt=0;
        while(cnt!=middle-1){
            cnt++;
            temp=temp->next;
        }
        revlist(temp);
        ListNode *temp2=head;
        while(temp2!=NULL){
            if(temp2->val!=temp->val){
                return false;
            }
            temp2=temp2->next;
            temp=temp->next;
        }
        return true;
    }
};
