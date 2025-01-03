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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==NULL){
            return NULL;
         }

        ListNode*prev=head;
        ListNode*curr=head;

        while( curr){
           
           if(curr->val!=prev->val){
           prev->next=curr;
           prev=prev->next;
           } 
           curr=curr->next;
          
        }
         prev->next=curr;

        return head;

    }
};