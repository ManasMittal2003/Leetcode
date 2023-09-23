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
    int getgcd(int a,int b){
        while(a!=b){
            if(a==0){
                return b;
            }
            if(b==0){
                return a;
            }
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *headans=new ListNode();
        ListNode *tail=new ListNode();
        headans=tail=NULL;
        ListNode *newnode=new ListNode();
        newnode->val=head->val;
        headans=tail=newnode;
        ListNode *temp=new ListNode();
        temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp!=head){
                ListNode *n=new ListNode();
                n->val=temp->val;
                tail->next=n;
                tail=n;
            }
            int gcd=getgcd(temp->val,temp->next->val);
            ListNode *newnode=new ListNode();
            newnode->val=gcd;
            tail->next=newnode;
            tail=newnode;
            temp=temp->next;
        }
        if(temp!=NULL&&temp!=head){
            tail->next=temp;
            tail=temp;
        }
        return headans;
    }
};
