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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        map<int,ListNode *> mapping;
        ListNode *temp=head;
        int i=1;
        while(temp!=NULL){
            mapping[i++]=temp;
            temp=temp->next;
        }
        while(left<right){
            ListNode *first=mapping[left];
            ListNode *second=mapping[right];
            swap(first->val,second->val);
            left++;
            right--;
        }
        return head;
    }
};
