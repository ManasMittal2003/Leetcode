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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans=NULL;
        ListNode *tail=NULL;
        ListNode *temp=head;
        map<int,int> mapping;
        while(temp!=NULL){
            mapping[temp->val]++;
            temp=temp->next;
        }
        for(auto i:mapping){
            if(i.second==1){
                ListNode *newnode=new ListNode(i.first);
                newnode->next=NULL;
                if(ans==NULL){
                    ans=tail=newnode;
                }
                else{
                    tail->next=newnode;
                    tail=newnode;
                }
            }
        }
        return ans;
    }
};
