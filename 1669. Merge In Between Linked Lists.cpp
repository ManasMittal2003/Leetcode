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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i=0;
        ListNode *temp=list1;
        ListNode *temp1;
        ListNode *temp2;
        while(temp!=NULL){
            if(i==a-1){
                temp1=temp;
            }else if(i==b){
                temp2=temp->next;
            }
            temp=temp->next;
            i++;
        }
        ListNode *last=list2;
        while(last->next!=NULL){
            last=last->next;
        }
        temp1->next=list2;
        last->next=temp2;
        return list1;
    }
};
