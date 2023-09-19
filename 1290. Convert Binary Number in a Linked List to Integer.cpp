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
    int getDecimalValue(ListNode* head) {
        int sum=0,i,cnt=0;
        ListNode *temp=new ListNode();
        temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        cnt--;
        i=cnt;
        temp=head;
        while(temp!=NULL){
            if(temp->val==1){
                sum=sum+pow(2,i);
            }
            i--;
            temp=temp->next;
        }
        return sum;
    }
};
