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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int minval = INT_MAX;
        vector<int> ans;
        ListNode* prev = NULL;
        vector<int> store;
        unordered_map<ListNode*, int> mp;
        int a = 1;
        ListNode* temp = head;
        while (temp != NULL) {
            mp[temp] = a;
            a++;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL) {
            if (prev && temp->next) {
                int d1 = prev->val;
                int d2 = temp->next->val;
                if ((temp->val) > d1 && (temp->val) > d2) {
                    if (!store.empty()) {
                        int last = store.back();
                        minval = min(minval, mp[temp] - last);
                    }
                    store.push_back(mp[temp]);
                } else if ((temp->val) < d1 && (temp->val) < d2) {
                    if (!store.empty()) {
                        int last = store.back();
                        minval = min(minval, mp[temp] - last);
                    }
                    store.push_back(mp[temp]);
                }
            }
            prev = temp;
            temp = temp->next;
        }
        int n = store.size();
        if (store.size() < 2) {
            return {-1, -1};
        }
        return {minval, store[n - 1] - store[0]};
    }
};
