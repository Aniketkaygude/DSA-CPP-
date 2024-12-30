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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }

        int cnt=0;
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next = NULL;
        ListNode*temp =head;
        while(temp!=NULL &&  cnt<k){
            cnt++;
            temp=temp->next;
        }

        if(cnt<k){
            return head;
        }

        while(curr!=NULL && cnt>0){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr= next;
            cnt--;
        }

        if(next){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};