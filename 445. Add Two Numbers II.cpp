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
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        stack<int> st1;
        stack<int> st2;
        ListNode *temp1=first;
        ListNode *temp2=second;
        while(temp1!=NULL){
            st1.push(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            st2.push(temp2->val);
            temp2=temp2->next;
        }
        int carry=0;
        ListNode *anshead=NULL;
        ListNode *tail=NULL;
        while((!st1.empty())&&(!st2.empty())){
            int dig1=st1.top();
            int dig2=st2.top();
            ListNode *newnode=new ListNode((carry+dig1+dig2)%10);
            carry=(carry+dig1+dig2)/10;
            if(anshead==NULL){
                anshead=tail=newnode;
            }
            newnode->next=anshead;
            anshead=newnode;
            st1.pop();
            st2.pop();
        }
        while(!st1.empty()){
            ListNode *newnode=new ListNode((st1.top()+carry)%10);
            carry=(carry+st1.top())/10;
            if(anshead==NULL){
                anshead=tail=newnode;
            }
            newnode->next=anshead;
            anshead=newnode;
            st1.pop();
        }
        while(!st2.empty()){
            ListNode *newnode=new ListNode((st2.top()+carry)%10);
            carry=(carry+st2.top())/10;
            if(anshead==NULL){
                anshead=tail=newnode;
            }
            newnode->next=anshead;
            anshead=newnode;
            st2.pop();
        }
        while(carry!=0){
            ListNode *newnode=new ListNode(carry%10);
            carry=carry/10;
            if(anshead==NULL){
                anshead=tail=newnode;
            }
            newnode->next=anshead;
            anshead=newnode;
        }
        tail->next=NULL;
        return anshead;
    }
};
