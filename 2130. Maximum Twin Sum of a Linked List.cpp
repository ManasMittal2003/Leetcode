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
    int pairSum(ListNode* head) {
        map<int,ListNode *> mapping;
        ListNode *temp=head;
        int i=0;
        while(temp!=NULL){
            mapping[i++]=temp;
            temp=temp->next;
        }
        int maxsum=INT_MIN;
        vector<pair<int,int>> v;
        int j=0;
        while(j<=(i/2)-1){
            int twin=i-1-j;
            v.push_back(make_pair(j,twin));
            j++;
        }
        for(int i=0;i<v.size();i++){
            int f=v[i].first;
            int s=v[i].second;
            ListNode *t1=mapping[f];
            ListNode *t2=mapping[s];
            maxsum=max(maxsum,t1->val+t2->val);
        }
        return maxsum;
    }
};
