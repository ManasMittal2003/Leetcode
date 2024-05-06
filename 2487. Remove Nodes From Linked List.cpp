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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode *> st;
        ListNode *temp=head;
        while(temp!=NULL){
            if(st.empty()||st.top()->val>=temp->val){
                st.push(temp);
            }else{
                while(!st.empty()&&st.top()->val<temp->val){
                    st.pop();
                }
                st.push(temp);
            }
            temp=temp->next;
        }
        ListNode *newhead=NULL;
        while(!st.empty()){
            if(newhead==NULL){
                newhead=st.top();
            }else{
                st.top()->next=newhead;
                newhead=st.top();
            }
            st.pop();
        }
        return newhead;
    }
};
