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
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
        unordered_map<ListNode *,int> visited;
        while(firstHead != NULL){
            visited[firstHead]++;
            firstHead=firstHead->next;
        }
        while(secondHead!=NULL){
            if(visited[secondHead] == 1){
                return secondHead;
            }
            secondHead=secondHead->next;
        }
        return 0;
    }
};
