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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        unordered_map<int,ListNode *> mp;
        ListNode *temp=head;
        int a=1;
        while(temp!=NULL){
            mp[a]=temp;
            a++;
            temp=temp->next;
        }
        a=a-1;
        int delnode=a-n+1;
        if(delnode==1){
            if(head->next==NULL){
                return NULL;
            }else{
                head=head->next;
                return head;
            }
        }
        int prev=delnode-1;
        int next=delnode+1;
        if(delnode==a){
            ListNode *temp=mp[prev];
            temp->next=NULL;
            return head;
        }
        ListNode *temp1=mp[prev];
        ListNode *temp2=mp[next];
        temp1->next=temp2;
        return head;
    }
};
