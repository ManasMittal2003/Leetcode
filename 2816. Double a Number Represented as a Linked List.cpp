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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* forward;
        ListNode* prev = NULL;
        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        ListNode* newhead = NULL;
        int carry = 0;
        while (prev != NULL) {
            ListNode* tail = new ListNode(carry + ((prev->val) * 2) % 10);
            carry = ((prev->val) * 2) / 10;
            if (newhead == NULL) {
                newhead = tail;
            } else {
                tail->next = newhead;
                newhead = tail;
            }
            prev = prev->next;
        }
        if (carry != 0) {
            ListNode* tail = new ListNode(carry);
            if (newhead == NULL) {
                newhead = tail;
            } else {
                tail->next = newhead;
                newhead = tail;
            }
        }
        return newhead;
    }
};
