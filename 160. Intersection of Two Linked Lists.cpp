/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *i=new ListNode();
        i=headA;
        ListNode *j=new ListNode();
        while(i!=NULL){
            j=headB;
            while(j!=NULL){
                if(i==j){
                    return i;
                }
                j=j->next;
            }
            i=i->next;
        }
        return NULL;
    }
};
