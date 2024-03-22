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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;
        ListNode* curr = head2;
        ListNode* forw;
        ListNode* prev = NULL;
        while (curr != NULL) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        ListNode* i = head;
        ListNode* j = prev;
        while (i != j && i != NULL && j != NULL) {
            if (i->val != j->val) {
                return false;
            }
            i = i->next;
            j = j->next;
        }
        return true;
    }
};
